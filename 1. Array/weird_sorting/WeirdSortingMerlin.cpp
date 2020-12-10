/**
 * WeirdSortingMelin.cpp
 * Given an array with 7,14,21 sort them in increasing order
 *
 * Description-
 * take the input array and in first pass count number of 7s,14s, and 21s
 * use a two pointer approach while iterating through the array
 *
 * if a[i]=7, we have to add it to the leftmost vacant place, so we swap it with the leftmost vacant position
 * at any instance, we can be sure that no such scenario exists where a[x-1]=7, a[x]=14 or 21 a[x+1]=7
 *  because whenever we are finding a 7, we are swapping it with the leftmost position unoccupied by a 7
 *
 * if a[i]=21, we have to add it to the rightmost vacant place, so we swap it with the rightmost vacant position
 *  it is to be noted that we do not increase iterations because it may happen that the value we are swapping with is a 21 and
 *  there is a 14 in between current and rightmost vacant position
 *
 * now we have to iterate till we find the position after which it is guaranteed that we have all 21s
 *
 * Time Complexity-O(n) Space Complexity-O(1)
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i;
    cin>>n;
    int a[n];
    int one=0,three=n-1;    //one will store 7s from left, three will store 21s from right
    for(i=0;i<n;i++)
        cin>>a[i];

    i=0;
    while(i<=three)
    {
        if(a[i]==7)
        {
            a[one]=a[one]^a[i]^(a[i]=a[one]);   //swapping with value at one because that is where 7 would go in a sorted array
            one++;
        }
        else if(a[i]==21)
        {
            a[three]=a[three]^a[i]^(a[i]=a[three]); //the same thing we did for 7, but doing from right for 21
            three--;
            i--;    //to nullify the final i++
            /*
             * the value currently present at i may be 21 and there may be a 14 present somewhere between three and i
             * so we are taking this step
            */
        }
        i++;
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
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
2
10
7 21 14 14 7 7 7 21 21 14
5
7 7 21 14 21

output-
7 7 7 7 14 14 14 21 21 21
7 7 14 21 21
*/
