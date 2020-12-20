/**
 * @file Unique Character
 * @brief In this problem we have to return the first character that occur once
 * @approach In this problem we first traversed the whole character one by one and
             listed down the frequency of all element. Now we are again traversing
             printing the index of only those character which have a frequency 1. But
             according to the question we need to output the first unique character
             so to keep the track of first unique character we use a flag variable
             If the first unique character is found then the flag is turned false
             and it breaks out off the loop. If no unique character is found then the
             value of flag remains true and gives out -1 as the result.
 * @details
 * Time Complexity O(n) and space complexity O(n)
 * As a crewmate, its a test of your observation skills. As soon as you enter the
   reactor, you witness a string by the manifold and a digital computer containing
   digits from 0-9. Your task is to find the index of the first element which does
   not appear more than once in the entire string and provide the index in the digital
   computer to unlock the manifold.
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
   The first line of each test case contains a single integer N
   The next line contains a string S of length N
 * Output :
   For each test case, print the index of the first character in the string which appears only once throughout.
   Indexing starts from 0. If no such character is found then print -1.
 * Sample Input :
   2
   9
   chocolate
   6
   papaya
 * Sample Output :
   1
   4
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  //write your code here
  int n;
  cin>>n;
  string str;
  cin>>str;
  bool flag = true;
  vector<int> freq(26,0);
  //counting the frequency of each element
  for(int i = 0; str[i]!='\0';++i)
  {
      freq[str[i] - 'a'] += 1;
  }
  //loop is valid till the first unique character is found
  for(int i=0;str[i]!='\0' && flag == true;++i)
  {
      //Only printing those elements which are having frequency 1
      if(freq[str[i]-'a'] ==1)
      {
          cout<<i<<endl;
          flag = false;
      }
  }
  //After no unique character is found
  if(flag == true)
  {
    cout<<-1<<endl;  
  }
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
