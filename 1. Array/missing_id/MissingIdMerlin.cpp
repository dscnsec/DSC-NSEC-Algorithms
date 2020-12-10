/**
 * MissingIdMerlin.cpp
 * Find stack number of the given id number
 *
 * Description-
 * if n is <3 we can safely say that stack number was 1
 * if n>2 stack number will be 1+smallest k such that kx>=(n-2)
 *
 * Time Complexity-O(1) Space Complexity-O(1)
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    int pos=1;
    if(n>2)
    {
        n-=2;
        pos+=n/x+(n%x==0?0:1);
    }
    cout<<pos<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
input-
4
7 3
1 5
22 5
987 13

output-
3
1
5
77
*/
