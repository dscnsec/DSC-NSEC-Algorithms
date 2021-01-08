/*
 * @file: [CPP]task_prerequisite_csubhradipta.cpp 
 * @brief: Check if it is possible to complete all tasks or not.
 * @details: 
 * Find the indegree of each tasks (elements)
 * Push the elements having indegree zero to queue; the starting points for topological ordering
 * Now, traverse the queue and count the number of elements having indegree zero
 * Decrement the indegrees by 1 of those elements which are the prerequisites for the same
 * When their indegree becoming zero, they are pushed into queue
 * Check whether count is equal to the number of tasks or not
 * If so, return true, else false
 * Space Complexity : O(n)
 * Time Complexity : O(n+e) ; e = edges
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */
 
#include <bits/stdc++.h>
using namespace std;

bool isCompleted(int n, int size, vector<pair<int, int>> &preq) {

    if(n == 0)
        return false;
        
    queue<int> q;
    
    vector<int> x[n], graph[n];
    int ind[n] = {0};
    
    for(int i = 0; i < size; i++){
        x[preq[i].first].push_back(preq[i].second);
        graph[preq[i].second].push_back(preq[i].first);
    }
    
    for(int i = 0; i < n; i++) 
        ind[i] = x[i].size();                  // storing the indegree of each element
    
    
    for(int i=0;i<n;i++){     // pushing all elements with zero indegree
       
        if(ind[i] == 0) 
            q.push(i);
    }
    
    int count = 0;
    while(!q.empty()){
        
        int temp = q.front();
        count++;                // count elements having or becoming indegree zero
        for(int i = 0; i < graph[temp].size(); i++){
            
            ind[graph[temp][i]]--;      
            
            if(ind[graph[temp][i]] == 0)    
                q.push(graph[temp][i]);      // when indegree of that task becomes zero   
        }
        
        q.pop();
    }
    
    if(count != n)
        return false;
        
    return true;

}

void solve(){
    int n, k;
    cin>>n>>k;
    vector <pair<int, int>> tasks(k);
    for (int i = 0; i < n; i++){
        cin>>tasks[i].first;
        cin>>tasks[i].second;
    }
    string check = isCompleted(n, k, tasks) ? "YES" : "NO";
    cout<<check<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}