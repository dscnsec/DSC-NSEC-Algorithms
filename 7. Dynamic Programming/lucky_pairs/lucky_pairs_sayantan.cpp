/**
 * @file Lucky Pairs
 * @brief We have to find whether each pair of word are lucky or not.
 * @Approach : The solve function takes 2 strings as inputs and passes it on to the check function.
               The check function is an iterative dynamic programming function which finds whether
               the 2nd string is a subsequence of the 1st string or not.A 2-d array stores the results
               And at last the condition whether the length of the longest subsequence is greater or equal
               to half of the length of the largest string among the two is checked and the results os printed.
               The longest string should be inputted first
 * @details
 * Time Complexity O(ab) and space complexity O(n^2)
 * As soon as you enter security, you notice that there is a sheet of paper lying which consists of T pairs of words.
   This sheet is a message from the impostors which states that you need to find out whether each pair of words are
   lucky pairs or not. Lucky pairs of strings are those pair of strings whose length of the common subsequence between the 2 is greater than or equal to half the length of the larger string between the pair.
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
   The next T lines contains two strings X and Y
 * Output:
   For each test case, print "YES" (without quotes) if the pair of strings is a lucky pair else print "NO" (without quotes)
 * Sample Input :
   2
   abcde ace
   abcde afgh
 * Sample Output:
   YES
   NO
 * Explanation:
   In Test Case 1, the longest common subsequence is ace and its length is greater than half the length of abcde(3 > 2.5).
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */
#include <bits/stdc++.h>
using namespace std;
// A Dynamic programming function to find whether the string is a subsequence or not
int check(string x, string y)
{ int i,j;
	int a = x.length();
	int b = y.length();

	// a 2-d array to store results
	int store[a + 1][b + 1] = { { 0 } };
	for (i = 0; i <= b; ++i)
		store[0][i] = 0;
	for (i = 0; i <= a; ++i)
		store[i][0] = 1;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			// If last characters are same, we either take last characters of both the strings or
			//ignore last character of first string

			if (x[i - 1] == y[j - 1])
				store[i][j] = store[i - 1][j - 1] +store[i - 1][j];

             else
				// If last character are different, we ignore last character of first string
				store[i][j] = store[i - 1][j];
		}
	}
    string check_string = max(a, b)/2 <= store[a+1][b+1] ? "YES" : "NO";//checks the condition
    cout<<check_string<<endl;
	return 0 ;
}

void solve() {
  //write your code here
  string x,y;

	cin>>x;
	cin>>y;

    check(x, y);

}
// Main function
int main() {
  int t;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
