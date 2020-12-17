/*
 * @file: [CPP]priority_tasks_csubhradipta.cpp 
 * @brief: Find task with the next greater priority number
 * @details: 
 * For checking higher priority task than ith task,
 * the array is travesed from (i+1)th task to nth task
 * If got a higher priority task than ith task, then it is pushed into the stack
 * Else pushed -1 
 * when again searching from beginning,
 * If got a higher priority task than the last task, it is pushed into the stack
 * Else pushed -1
 * Reversed the stack
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector<int> priority(n);  
    for(int i = 0; i < n; i++){
        cin>>priority[i];
    }
    
    stack<int> tasks, output;
    int high;
    
    for (int i = 0; i < n-1; i++) 
    { 
        high = -1;                          // will be returned if not get a higher priority task
        for (int j = i+1 ; j < n; j++) 
        {   if ((priority[i] < priority[j]) && j != 0) 
            { 
                high = priority[j];         // got task of higher priority
                break;
            }
        } 
        tasks.push(high); 
    }
    
    // Again, searching from beginning
    
    high = -1;
    
    for (int i=0; i<n; i++){
        if(priority[n-1] < priority[i]){
            high = priority[i];             // got task of higher priority
            break;
        }
    }
    
    tasks.push(high);   
    
    while(!tasks.empty()){
        output.push(tasks.top());           // reversed the stack
        tasks.pop();
    }
    
    while(!output.empty()){
        cout<<output.top()<<" ";
        output.pop();
    }
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