/**
 * @file  Weird Sorting
 * @brief The Space Mission General has N bags. The bags are filled with either 7 or 14 or 21 coins. He wants to organize the bags in a non-decreasing order.
          Help the General accomplish the task. Note: Achieve the task in O(n) time and space complexity
 * @approach I the first iteration while taking the input we are counting the number of 7,14,21 and then in the next iteration we are placing 7 in the array
             and decreasing the count of that particular element. Similarly we are placing 14 and then 21 next.
 * @details
 *  Time complexity O(n) and space complexity O(n)
 *  The Space Mission General has N bags. The bags are filled with either 7 or 14 or 21 coins. He wants to organize the bags in a non-decreasing order.
    Help the General accomplish the task. Note: Achieve the task in O(n) time and space complexity
 *  Input :
    The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
    The first line of each test case contains a single integer N
    The next line contains N space separated integers
 *  Output:
    For each test case, print N space separated integers such that they are arranged in a non-decreasing fashion.
 *  Sample input
    1
    10
    7 21 7 7 7 21 14 14 21 7
 *  Sample output :
    7 7 7 7 7 14 14 21 21 21
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  //write your code here
    int n,i,count_7=0,count_14=0,count_21=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //counting number of 7
        if(a[i] == 7)
            count_7++;
        //counting number of 14
        if(a[i] == 14)
            count_14++;
        //counting number of 21
        if(a[i] == 21)
            count_21++;
    }
    for(i=0;i<n;i++)
    {
        //placing 7 in the array first
        if(count_7>0)
        {
            a[i] = 7;
            count_7--;
        }
        //when the element 7 got finished then 14 is placed
        else if(count_14>0)
        {
            a[i] = 14;
            count_14--;
        }
        //then element 21 is placed in the array
        else
        {
            a[i] = 21;
            count_21--;
        }
    }
    for(i=0;i<n;i++)
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
