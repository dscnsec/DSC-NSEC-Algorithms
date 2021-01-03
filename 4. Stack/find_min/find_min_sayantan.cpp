/**
 * @file Find Minimum
 * @brief We have to find the sum of minimum of every contiguous subarray from the given list of integer.
 * @Approach : We will be making two array one for the left and the other for the right .The left one will store the length
               of strictly larger number and the right will store the length of the larger number on right
               left[i] + 1 equals to the number of subarrays ending with a[i], and a[i] is only single minimum.
               Similarly,right[i] + 1 equals to the number of subarrays starting with a[i],and a[i] is first minimum.
               (left[i])*(right[i]),equals total number of subarrays in which a[i] is minimum.
 * @details
 * Time Complexity O(n) and space complexity O(n)
 * When you enter the upper engine, you notice a list of N integers given to you, a keyboard with digits
   from 0 to 9 and a leaflet beside it. The leaflet mentions that for the given list of integers, you need
   to find the sum of minimum of every contiguous subarray from the list of integers. As soon as you find
   out the sum, you need to enter the sum in the keyboard so that the answer is processed and your task is
   completed. Note: Use stack
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
   The first line of each test case contains a single digit N
   The next line contains N space generated integers
 * Output:
   For each test case, print the sum of minimum of every contiguous subarray from the list of integers. Since the
   answer may be large, print the answer modulo 10^9+7
 * Sample Input :
   1
   4
   3 1 2 4
 * Sample Output:
   17
 * Explanation:
   The subarrays are (3), (1), (2), (4), (3,1), (1,2), (2,4), (3,1,2), (1,2,4), (3,1,2,4). The respective minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1 and the sum is 17.
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */


#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int left[n], right[n]; //considering left and right to store the left and right subarray

    stack<pair<int, int> > stk1, stk2;

    //storing the no of elements which are strictly greater than a[i]
    for (int i=0;i<n;i++)
        {
        int Count = 1;
        //Retrieve element from the stack till the larger number than a[i] is found
        while (!stk1.empty() && (stk1.top().first) > a[i])
        {
            Count += stk1.top().second;
            stk1.pop();
        }
        stk1.push({a[i],Count});
        left[i]=Count;
    }

    //storing the no of elements larger than a[i]
    for (int i=n-1;i>=0;i--) {
        int Count = 1;
        //Retrieve element from the stack till the larger or equal number to a[i] is found
        while (!stk2.empty() && (stk2.top().first) >= a[i])
        {
            Count += stk2.top().second;
            stk2.pop();
        }
        stk2.push({a[i],Count});
        right[i] = Count;
    }
    int answer = 0;
    for (int i=0;i<n;i++)
    {
       answer = (answer + a[i] * left[i] * right[i]);
    }
    cout<<answer<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
