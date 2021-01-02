/**
 * TaskPrerequisiteArnab.java
 * To detect a cycle in a Directed Graph
 * Description:-
 * We take an adjacent list and add edge from one side, not from both as the direction is specific in a directed graph.
 * Then we will take two boolean arrays,one for checking the visited nodes and other the recursion array which will recur along with the methods.
 * Now we would iterate through the nodes from 0 to N-1.And check if the same node that has been visited is again get retrieved.
 * If any node gets retrieved more than once then there is a cycle.Else no cycle is formed.Then return true or false accordingly.
 * Time Complexity-O(n) Space Complexity-O(n)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;

public class TaskPrerequisiteArnab {
    static void edge(ArrayList<Integer>[] adj, int u, int v) {
        adj[u].add(v); //Since its a directed graph hence just adding edge from one side
    }

    static boolean solve(ArrayList<Integer>[] adj, int n) {
        boolean[] visited = new boolean[n]; //This array stores which nodes arevisited and which are not
        boolean[] recur = new boolean[n];//This is a recursion stack,for checking if the visited node is visited once more

        for (int j = 0; j < n; j++) {
            if (visited[j] == false) {
                if (DFSCyclicUtil(adj, visited, j, recur) == true) //then cycle is detected
                    return true;
            }
        }
        return false; //else return not detected cycle
    }

    static boolean DFSCyclicUtil(ArrayList<Integer>[] adj, boolean[] visited, int v, boolean[] recur) {
        visited[v] = true;  //Mark the current code as visited
        Iterator<Integer> it = adj[v].iterator(); //Checking all adjacent nodes connected to the current node
        while (it.hasNext()) {
            int n = it.next();
            if (visited[n] == false) //If the current node is not visited then recur that node to the function
            {               //And check if cycle gets formed or not.
                if (DFSCyclicUtil(adj, visited, n, recur) == true) //If cycle is found return true.
                    return true;
            } else {
                if (recur[n] == false) //Suppose the node is visited,but it already has formed a cycle.then
                    return true;   //return true
            }
        }
        recur[v] = true; //Make the recur part as true for this node
        return false;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(buf.readLine());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < t; i++) {
            String[] st1 = (buf.readLine()).split(" ");
            int n = Integer.parseInt(st1[0]);
            int k = Integer.parseInt(st1[1]);

            ArrayList<Integer>[] adj = new ArrayList[n];
            for (int j = 0; j < n; j++)
                adj[j] = new ArrayList<Integer>();
            for (int j = 0; j < k; j++) {
                String[] st2 = (buf.readLine()).split(" ");
                int u = Integer.parseInt(st2[0]);
                int v = Integer.parseInt(st2[1]);
                edge(adj, u, v);
            }
            boolean cycle = solve(adj, n);  //call the method
            if (cycle == true)   //If cycle is present then prerequisite can't be solved
                sb.append("NO" + "\n");
            else
                sb.append("YES" + "\n");
        }
        System.out.print(sb); //then printing it
    }
}

/*
Input:-
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

Output:-
YES
YES
NO
*/