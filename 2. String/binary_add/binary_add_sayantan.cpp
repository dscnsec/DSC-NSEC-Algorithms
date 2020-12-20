/**
 * @file Binary Add
 * @brief We need to calculate the sum of two binary strings
 * @approach We started adding bitwise adding from the left hand size. Now the idea is that
             if there is no carry then add the two binary digit and store the sum and if a
             carry is generated it is moved forward to the right hand side and is added with
             the next bit and then the entire binary digit sum is printed at the last.
 * @details
 * Time complexity O(first + second), first = size of first string and second = size of second string and space complexity O(n)
 * To swipe the card in admin, all the crewmate must solve a simple mathematics problem
   which is addition of 2 strings. However, the twist here is that the 2 strings will be
   given in binary and the crewmate have to perform binary addition. Help yourself and
   other crewmate in the binary addition.
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases. T test cases follows
   The first line of each test case contains two space separated string, X and Y
 * Output :
   For each test case, print the sum of the 2 binary strings.
 * Sample Input :
   2
   11 1
   1010 1011
 * Sample Output :
   100
   10101
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  //write your code here
  string first, second;
  string result = "";
  int sum = 0;
  cin>>first>>second;
  int size_first = first.size()-1, size_second = second.size()-1;
  //Traversing both the binary string entered from last to the begining
  while(size_first >= 0 || size_second >=0 || sum == 1)
  {
      //calculating the last digit sum and the carry if generated
      sum = sum + ((size_first >= 0)? first[size_first] - '0' : 0);
      sum = sum + ((size_second >= 0)? second[size_second] - '0' : 0);
      //if the sum of the digit is 1 or 3 then 1 is to be added
      result = char(sum % 2 + '0') + result;
      sum = sum / 2; //To calculate the carry
      size_first--; //Moves to next digit of the first digit enetered (left direction)
      size_second--; //Moves to the next digit of the second digit entered (left direction)
  }
  cout<<result<<endl; //Printing the total sum generated
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
