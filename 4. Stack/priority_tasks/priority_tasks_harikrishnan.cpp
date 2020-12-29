/**
 * @file priority_tasks_harikrishnan.cpp
 * @brief Here we need to find the Next Greater Element of a circular array, 
 *
 * Description - A way to tackle such circular array problem is to consider an array 
 *  twice the size of input array, that is formed by concatenating the input array
 *  on itself. We can achieve this in traversal by making use of modulus operator
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;


void solve()
{
        int n,temp;
        cin>>n;
        vector<int> priority_tasks;
        
        // Store the priority of the tasks in the 'priority_tasks' vector
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            priority_tasks.push_back(temp);
        }
        
        vector<int> next(n,-1); //vector of size 'n' and value '-1' to store the result
        // Stack stores the indexes of the previous elements
        stack<int> s; 
        
       // Traverse the circular array twice  
        for(int i = 0;i<(2*n);i++)
        {   
            int num = priority_tasks[i%n]; //element considered
            
            while(s.empty() == false && priority_tasks[s.top()] < num)
            {
                next[s.top()] = num;
                s.pop();
            }
            s.push(i%n);
        }
        
        //Print the next greater element of each element.
        for(int i=0;i<n;i++)
        {
            cout<<next[i]<<" ";
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
3
1 2 1
4
1 3 4 2

SAMPLE OUTPUT

2 -1 2 
3 4 -1 3 

*/
