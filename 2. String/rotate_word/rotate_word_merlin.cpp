/**
 * rotate_word_merlin.cpp
 * Check if 2nd word can be obtained by rotating the first word clockwise or anticlockwise
 *
 * Description-
 * The first word is rotated across a pivot and rotated clockwise or anticlockwise
 * This means that if 2nd word=x+y, 1st word is y+x, irrespective of clockwise or anticlockwise rotating
 * This means if 2nd word is a substring of 1st word concatenated with 1st word, our answer will be yes
 * Otherwise our answer will be no
 *
 * Note-We can use KMP-alogorithm to check in O(n) but since constraints are low, normal brute force would work just fine
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void solve()
{
    string a,b;
    cin>>a>>b;
    if(a.length()!=b.length())  //lets remove the useless cases beforehand
    {
        cout<<"NO\n";
        return;
    }
    a+=a;   //concatenating a with a for our circular structure
    int n=a.length(),i,j;
    bool ans=false;

    for(i=0;i<=n;i++)
    if(a[i]==b[0])  //we will start our checking from indices which match with 1st character of b
    {
        bool pos=true;
        for(j=0;j<n/2;j++)
        if(a[i+j]!=b[j]) {pos=false; break;}
        if(pos) {ans=true; break;}
    }
    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
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
amazon azonam
amazon onamaz

output-
YES
YES
*/
