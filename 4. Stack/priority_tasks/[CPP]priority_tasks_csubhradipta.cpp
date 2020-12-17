/*
 * @file: [CPP]priority_tasks_csubhradipta.cpp 
 * @brief: Find task with the next greater priority number
 * @details: 
 * For checking higher priority task than ith task,
 * the array is travesed from (i+1)th task to (n+i)th task 
 * If got a higher priority task than ith task, then it is pushed into the stack
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
    
    for (int i = 0; i < n; i++) 
    {   high = -1;
        for (int j = i+1 ; j < n+i;  j++)       //checking n no. of tasks from next position  
        {   if ((priority[i] < priority[j%n])) 
            {   
                high = priority[j%n];         // got task of higher priority
                break;
            }
        } 
        tasks.push(high);
    } 

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
