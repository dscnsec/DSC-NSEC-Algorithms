/**
 * @file  Push Zero
 * @brief The program wants to take an integer input and push all the zeros after the non-zero number with changing position of non-zero integer
 * @approach In the first iteration we are taking the non-zero elements and merging it to the array then after the array is filled with non-zero element
    then we filling the leftover array with 0
 * @details
 *  Time complexity O(n) and space complexity O(n)
 *  The impostors love the digit 0. In order to create problems for them, you have been given N integers and your task includes pushing all
    the zeroes to the end of the arrangement of numbers, not disturbing the arrangement of the non-zero integers.
 *  Input :
    The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
    The first line of each test case contains a single integer N
    The next line contains N space separated integers
 *  Output:
    For each test case, print N space separated integers such that all the zeroes are at the end of the arrangement
 *  Sample input
    2
    5
    1 0 2 0 3
    6
    0 5 6 9 0 3
 *  Sample output :
    1 2 3 0 0
    5 6 9 3 0 0
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  //write your code here
    int n;
    cin>>n;
    int a[n];
    for( int i=0;i<n;i++ )
    {
        cin>>a[i];
    }
    int c = 0;
    for(int i=0;i<n;i++)
    {
      //Ignoring the zero elements
      if( a[i] != 0 )
      {
          a[c++] = a[i];
      }
    }
    //Filling the leftover space of the array with 0
    while ( c < n )
    {
        a[c++] = 0;
    }
    for( int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// Main function
int main() {
  int t;
  cin>>t;
  while(t--)
 {
   solve();
 }
 return 0;
}
