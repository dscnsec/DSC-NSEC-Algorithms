/**
 * missing_id_harikrishnan.cpp
 * Find stack number of the stolen id number
 *
 * Description-
 * if n is <=2, then the stolen id belongs to stack number 1
 * Else if n > 2, then we divide (n-2) by x to obtain the stack 
 * number in which n belongs to.
 *
 * Time Complexity - O(1) Space Complexity - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    //Given, First stack contains 1,2 ids
    if(n<= 2)
    {
        cout<<"1"<<endl;
        return;
    }
    n = n - 2;
    if(n%x == 0)
    {
        cout<<((n/x)+1)<<endl;
    }
    else
    {
        cout<<((n/x)+2)<<endl;
    }
    return;
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
SAMPLE INPUT
4
7 3
1 5
22 5
987 13

SAMPLE OUTPUT
3
1
5
77
*/
