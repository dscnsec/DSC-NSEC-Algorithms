/**
 * @file  Climb Stairs
 * @brief In order to perform the next task, the crewmates must get to the second floor of the space station. There are N stairs between the first and second floors. Crewmates can take
          1 or max 2 steps at a time. Help the Head of the Space Mission find out the number of ways the crewmates can climb to the second floor.
 * @approach we use a recursive technique here in which when the crewmate want to reach nth stair from either (n-1)th stair or(n-2) stair. So for each n stair
             we find the total number of ways to reach (n-1)stair and (n-2) stair and then add them to get the answer of nth stair
 * @details
 *  Time complexity O(2^n) and space complexity O(1)
 *  In order to perform the next task, the crewmates must get to the second floor of the space station. There are N stairs between the first and second floors.
    Crewmates can take 1 or max 2 steps at a time. Help the Head of the Space Mission find out the number of ways the crewmates can climb to the second floor. NOTE: Use recursion
 *  Input :
    The first line of the input contains a single integer T denoting the number of test cases. T test cases folows
    The first and only line of each test case contains a single digit N
 *  Output:
    For each test case, print the number of ways the crewmates can climb to the second floor.
 *  Sample input
    2
    1
    2
 *  Sample output :
    1
    2
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;
//Function to calculate the number of ways
int fibo(int N)
    {
        if(N <= 1)
            return N;
        else
            return fibo(N-1) + fibo(N-2);
    }

void solve() {
  //write your code here
    int N;
    cin>>N;
    int numberOfWays = fibo(N+1);
    cout<<numberOfWays<<endl;
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
