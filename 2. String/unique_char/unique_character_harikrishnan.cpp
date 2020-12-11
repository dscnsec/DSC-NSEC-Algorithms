/**
 * @file unique_character_harikrishnan.cpp
 * @brief Given a string containing only alphabets, and we have to find
 * the index of the first character in the string which appears only once throughout.
 *
 * Description-
 * We create a structure that can store the count and the index of each element in a string 
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * Auxillary space needed - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

struct container
{
    int cnt=0, index;
};

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    //Declare an array of size 256(count of total number of ASCII values)
    struct container arr[256];
    
    //Traverse the string  and mark its count and index
    for (unsigned long int i = 0; i<n; i++) 
    { 
        (arr[s[i]].cnt)++; 
        arr[s[i]].index = i; 
    } 
    int ans = INT_MAX;
    
    //find the element with count = 1 and has lowest index
    for (int i = 0; i < 256; i++) 
        if (arr[i].cnt == 1) 
            ans = min(ans, arr[i].index);  
            
    cout<<ans<<endl;
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

2
9
chocolate
6
papaya
6
banana

SAMPLE OUTPUT

1
4
0

*/
