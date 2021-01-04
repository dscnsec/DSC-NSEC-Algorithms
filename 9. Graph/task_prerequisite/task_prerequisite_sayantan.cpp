/**
 * @file Task Prerequisite
 * @brief We have to find based on the prerequisites list, you have to determine whether it is possible to do all tasks from 0 to N-1.
 * @Approach :  All tasks are nodes of the graph and if task u is a prerequisite of task v, we will add a directed edge from node u to node v.
                Now, this problem is equivalent to detecting a cycle in the graph represented by prerequisites. If there is a cycle in the graph,
                then it is not possible to finish all tasks because in that case there is no any topological order of tasks. Since pair is inconvenient
                for the implementation of graph algorithms, we first transform it to a graph. If task u is a prerequisite of task v, we will add a
                directed edge from node u to node v.
 * @details
 * Time Complexity O(N) and space complexity O(N)
 * You have been assigned N tasks, labelled 0 to N-1. Along with that the General has given you a list. According
   to the list, some tasks may have prerquisites. For eg, to complete task 0 you may have to complete task 1 which is expressed as a pair [0,1].
   Based on the prerequisites list, you have to determine whether it is possible to do all tasks from 0 to N-1.
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
   The first line of each test case contains N and K
   The next K lines contains a pair [a,b] which means that task b is a prerequisite of task a.
 * Output:
   For each test case, print whether it is possible to complete all 0 to N-1 tasks.
 * Sample Input :
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
 * Sample Output:
   YES
   YES
   NO
.* @author [Sayantan Bose](https://github.com/sayantan1413)
 */
#include <bits/stdc++.h>
using namespace std;
// adjacent lists are returned from the graph
vector<unordered_set<int> > graph(int no_of_tasks,vector<pair<int, int> >& tasks)

{
	vector<unordered_set<int> > dfs_graph(no_of_tasks);
	for (auto pre : tasks)
		dfs_graph[pre.second].insert(pre.first);
	return dfs_graph;
}
//function to check the cycle in the directed graph
bool graph_cycle(vector<unordered_set<int> >& graph, int node,
			vector<bool>& graph_path, vector<bool>& vs)
{
	if (vs[node]) //visited node
		return false;
	graph_path[node] = vs[node] = true;
	for (int neigh : graph[node])
		if (graph_path[neigh] || graph_cycle(graph, neigh, graph_path, vs))
			return true;
	return graph_path[node] = false;
}
//checks if the task is possible or not
int check(int no_of_tasks, vector<pair<int, int> >& tasks)
{
    int i;
	vector<unordered_set<int> > dfs_graph = graph(no_of_tasks, tasks);
	vector<bool> graph_path(no_of_tasks, false), vs(no_of_tasks, false);
	for (i = 0; i < no_of_tasks; i++)
		if (!vs[i] && graph_cycle(dfs_graph, i, graph_path, vs))//
			return 0;
	return 1;
}
void solve() {
  //write your code here
  int N,K,a,b,vcheck;
    cin>>N>>K;
	int no_of_tasks=K+1;
	vector<pair<int, int> > tasks;
	for(int i=0;i<K;i++)
    {
        cin>>a>>b;
        tasks.push_back(make_pair(a, b));
    }
    vcheck=check(no_of_tasks, tasks);
	if (vcheck==1) {
		cout << "YES"<<endl;

	}
	else {
		cout<<"NO"<<endl;
		}
}
// Main function
int main() {
  int t;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
