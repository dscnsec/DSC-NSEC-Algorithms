/**
 * binary_add_merlin.cpp
 * Add two binary strings
 *
 * Description-
 * take two pointers to the end of both strings a and b (lets consider them x and y)
 * now for any particular position, the bit will hold a value (a[x]+b[y]+carry)%2 in the sum
 * carry is the residue that is carried over when 1+1 is added
 * after x or y reaches 0, we have to add the remaining characters of the string whose pointer hasnt reached 0 yet
 * if even after adding all digits carry is not 0, add carry in front of the final answer
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    int x=a.length()-1,y=b.length()-1;
    int carry=0;
    string ans="";
    while(x>=0 && y>=0) //as long as none of the strings are exhausted
    {
        carry+=a[x]-'0'+b[y]-'0';   //carry is the carry over from previous addition 
        ans=(char)(carry%2+'0')+ans;
        carry/=2;
        x--; y--;   //after addition at a particular bit x and y values are decremented 
    }

    while(x>=0)     //this is to be done when a has more bits than b
    {
        carry+=(a[x]-'0');
        ans=(char)(carry%2+'0')+ans;
        carry/=2;
        x--;
    }

    while(y>=0)     //this is done when b has more bits than a
    {
        carry+=b[y]-'0';
        ans=(char)(carry%2+'0')+ans;
        carry/=2;
        y--;
    }
    if(carry)   //add a 1 if carry is not yet 0 
        ans=(char)(carry+'0')+ans;
    cout<<ans<<"\n";
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
3
11 100
100 100
110 10
output-
111
1000
1000
*/
