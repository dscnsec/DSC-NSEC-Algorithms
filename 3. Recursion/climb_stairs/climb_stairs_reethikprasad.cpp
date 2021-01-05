/**
 * file_climb_stairs_reethikprasad.cpp
 * Description
 * Need to find the number of ways in which we can get to the second floor
 * where we can take one step or maximum two steps.
 * for first step only 1 step is possible from second 2 steps are possible
 * Time Complexity - O(2^n) Space Complexity - O(1)
 * Auxillary space needed - O(1)
 * @author [reethikprasad](https://github.com/reethikprasad)
 */

#include<bits/stdc++.h>
using namespace std;

int nos(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        int step1=nos(n-1);
        int step2=nos(n-2);
     return step1+step2;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
      cin>>n;
      cout<<nos(n)<<endl;
    }
    return 0;
}


/*
input
2
1
2

output
1
2
*/