/**
 * @file Save Yourself
 * @brief We have to find all the palindrome substring and print the possible ones.
 * @Approach : The main function does not contain any logic it is only used for calling other functions and taking the input.
               The function partition then generates all palindromic substrings of the inputted string and stores it in a vector.
               Each of the substrings is checked if palindrome or not and returned.
               Then the function substrings goes through all the indexes and recursively add remaining substrings if the current string is palindrome.
               Atlast the vector storing the palindromic substrings is printed.
 * @details
 * Time Complexity O(n^2) and space complexity O(n)
 * The impostors love palindromic strings. So much that they have declared that they would reduce the killing of crewmates if their puzzle can be
   solved. They have given a word S and have asked you to partition the string into substrings, such that all the substrings are palindrome. They
   have asked you to print all possible partitions of the string.
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
   The first line of each test case contains a single integer N
   The next line contains a string S
 * Output:
   For each test case, print all possible palindrome partitions of S
 * Sample Input :
   2
   aab
   nitin
 * Sample Output:
   aa b
   a a b
   n i t i n
   n iti n
   nitin
.* @author [Sayantan Bose](https://github.com/sayantan1413)
 */
#include <bits/stdc++.h>
using namespace std;
//checks if the substrings are palindrome or not
int palindrome(string str)
{
	int length = str.length();
	length--;
	for (int i=0; i<length; i++)
	{
		if (str[i] != str[length])
			return 0;
		length--;
	}
	return 1;
}
//prints the vector that stores all the palindromic substrings
void printSolution(vector<vector<string> > palindrome_substring)
{
	for (int i = 0; i <palindrome_substring.size(); ++i)
	{
		for(int j = 0; j < palindrome_substring[i].size(); ++j)
			cout << palindrome_substring[i][j] << " ";
		cout << endl;
	}
	return;
}
//recursively goes through all the indexes stores the remaining substrings if the current substring is palindrome
void substrings(vector<vector<string> > &vs, string &str,
				vector<string> &new_string, int index)
{
	int length = str.length();
	string s;
	vector<string> current_string = new_string;
	if (index == 0)
		new_string.clear();
	for (int i = index; i < length; ++i)
	{
		s = s + str[i];
		int c=palindrome(s);
		if (c==1)
		{
			new_string.push_back(s);
			if (i+1 < length)
				substrings(vs,str,new_string,i+1); //recursive call
			else
				vs.push_back(new_string);
			new_string= current_string;
		}
	}
	return;
}
//finds all the substrings of the string str
void solve(string str, vector<vector<string> >&palindrome_substring) {
  //write your code here
  vector<string> new_string;
	substrings(palindrome_substring, str, new_string, 0);
	printSolution(palindrome_substring);
	return;
}
// Main function
int main() {
  int t;
   string str;
  cin>>t;
  while(t--) {
      cin>>str;
        vector<vector<string> > palindrome_substring;
    solve(str, palindrome_substring);
  }
  return 0;
}
