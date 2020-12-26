/**
 * @file task_prerequisite_harikrishnan.cpp
 * @brief We have to determine if all tasks can be done or not, given that some tasks have some another tasks as prerequisites.
 *
 * Description -  Let us consider all tasks as  nodes of the graph, and also let a node be directed from another node, which is a prerequisite for the former node(task).  
 *  Now we need to check if there is a topological order of the nodes in the directed graph. If there is then the answer would be "YES".
 * Every graph without a cycle has a topological order of nodes and vice versa. Hence the problem reduces to check if a cycle exist in a graph or not. 
 *
 *
 * Time Complexity - O(N+K) Space Complexity - O(N)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;

// A recursive function to check if a graph is Cyclic or not using Depth First Traversal
bool checkCycle(int n, vector<int> adj[], vector<bool>& vis, vector<bool>& rec)
{
    if(vis[n] == false)
    {
        // Mark the present node as visited and include it in the recursive stack
        vis[n] = true; 
        rec[n] = true;

        // Traverse through all the adjacent nodes of the present node.
        for(long unsigned int i = 0; i < adj[n].size(); ++i) 
        { 
        // If the presnt adjacent node is not visited already and if those nodes  form a cycle.
            if (!vis[i] && checkCycle(i, adj, vis, rec) ) 
                return true; 
        //  Else if that node has already come across the recursion stack.
            else if (rec[i]) 
                return true; 
        } 
    }
    rec[n] = false;  // Remove the node from the recursive stack. 
    return false;   
}

void solve()
{
    int N,K,u,v;
    cin>>N>>K;                 // Input the string
    if(N == 0)            // No tasks gievn.
    {
        cout<<"YES";
        return;
    }
    vector<int> adj[N];  // A vector to store the adjacent nodes of all nodes.
    for(int i=0;i<K;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<bool> vis(N);        // To mark all the visited nodes
    vector<bool> rec(N);        // To mark the nodes as visited or not in the recursion

    for(int i=0;i<N;i++)
    {
        vis[i] = false;
        rec[i] = false;
    }
    for(int i = 0; i < N; i++) 
        if (checkCycle(i, adj, vis, rec))   // A function to check if the graph is cyclic or not
            {
                cout<<"NO\n";
                return;
            } 
    cout<<"YES\n";
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

3
2 1
1 0
4 4
1 0
2 0
3 1
3 2
2 2
1 0
0 1

SAMPLE OUTPUT

YES
YES
NO 

*/
