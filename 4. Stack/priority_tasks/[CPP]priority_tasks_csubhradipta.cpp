/*
 * @file: [CPP]priority_tasks_csubhradipta.cpp 
 * @brief: Find task with the next greater priority number
 * @details: 
 * As the array is circular so we have to traverse it twice, therefore the array is concatinated to itself
 * The resultant array initialized with -1, so that if no task foun of higher priority, it will remain -1
 * Else it will be updated with the higher priority task
 * Putting index of element in stack, not the element as similar element may exist
 * While stack is not empty and current task's priority is lesser than previous task's priority,
 * its index being pushed to the stack
 * If higher priority task found, the resultant array gets updated
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin >> n;
    
    int priority[2*n], result[n]; 
    for(int i = 0; i < n; i++){
        cin >> priority[i];
        priority[i+n] = priority[i];          // concatinating array to itself
        result[i] = -1;
    }
    
    stack<int> task;
    
    for(int i = 0; i < 2*n; i++)
    {   
            while(!task.empty() && priority[i] > priority[task.top()])      // getting a higher priority task
            {   
                result[task.top()%n] = priority[i];      // store the higher priority task
                task.pop();
            }
        task.push(i);                // push the current index
    }
    
    for(int i = 0; i < n; i++)
        cout<<result[i]<<" ";
        
    cout<<endl;  
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        solve();
    } 
    return 0; 
} 
