/**
 * @file wierd_sorting_harikrishnan.cpp
 * @brief Given an array containing '7', '14', '21' as
 * its elements and we need to organise the elements in 
 * non-decreasing order.
 *
 * Description-
 * We can use the 'partition' concept in quicksort to solve the problem.
 * This is a variation of the Famour Dutch Natinal Flag algorihm.
 * http://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * Auxillary space needed - O(1)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // We partition the array into three sections(containing the three elements), and beg, mid are the start positions of the first two sections, 
    // and end is the end position of the last section
    
    int beg = 0, mid = 0, end = n-1;
    while(mid<=end)
    {
        // We traverse the array, analysing the mid position
        switch(arr[mid])
        {
            //mid element is 7, So swap it with the beg position
            case 7: swap(arr[mid],arr[beg]);
                    mid++,beg++;
                    break;
            // mid element is 14, So just increment mid        
            case 14: mid++;
                    break;
            //mid element is 21, So swap it with the end position        
            case 21: swap(arr[mid],arr[end]);
                    end--;
                    break;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
10
7 21 7 7 7 21 14 14 21 7
12
7 14 14  7 14 21 14 21 7 7 14 7

SAMPLE OUTPUT

7 7 7 7 7 14 14 21 21 21 
7 7 7 7 7 14 14 14 14 14 21 21
*/
