# How to take any binary tree as input

Note that any binary tree is basically a graph as well, so we can use adjacency list format. The templates for that are given below.<br>

### C++ template:
```c++
map<int,vector<int>> graph;     //our adjacency list
/*
you can also use vector<int> g[MAXN] which is an array of vectors 
and can be used only when MAXN is small and already known
*/

map<int,int> par,depth;     //stores parent of each node and depth of each node respectively
//note that if MAXN is small and known, we can use par[MAXN] and depth[MAXN] respectively

void input(int n)   //taking input for n nodes
{
     for(int i=0;i<n-1;i++) //a tree will have n-1 edges
     {
        int u,v;
        cin>>u>>v;  //u is parent, v is child
        g[u].push_back(v);  //add value to map
        //the same statement will be used for vector too 
     }
     int r;
     cin>>r;    //take root of tree(in case tree is rooted at 0, no need to take it)
     
     //write remaining code here
     
     /*
     in case parent or depth of a node is to be calculated
     par[node]=parent;
     depth[node]=depth_val;
     */
}
```

### Java Template:
```java
class ClassName
{
    HashMap<Integer,ArrayList<Integer>> g=new HashMap<>();
    /*
    in case we know the maximum size of input(MAXN) and it is relatively small, we can use the following
    ArrayList<Integer> g[]=new ArrayList[MAXN];
    this is an array of ArrayLists and it will help us in storing the adjacent matrix
    */
    HashMap<Integer,Integer> par=new HashMap<>(),depth=new HashMap<>();     //maps the parent and depth of each node 
    //in case of small MAXN, use int[] par=new int[MAXN],depth=new int[MAXN]
    
    void input(int n)   //n is our number of nodes
    {
        for(int i=0;i<n-1;i++)  //there are n-1 edges to any tree
        {
            String s[]=bufferedreader.readLine().split(" ");    //this can be any version of taking input
            int u=Integer.parseInt(s[0]),v=Integer.parseInt(s[1]);  // u is parent v is child
            //we will add child to parent
            if(g.get(u)==null)  //this is essential or else you will face error
                g.put(u,new ArrayList<>());
            g.get(u).add(v);
            /*
            for array of ArrayLists, the form will be
            if(g[u]==null) g[u]=new ArrayList<>();
            g[u].add(v);        
            */
        }
        int r=Integer.parseInt(bufferedreader.readLine());  //this is the root(in case tree is rooted at 0, ignore it)
        
        //write remaining code here
        
        /*
        in case you need to calculate value of par and depth of a node
        for HashMaps:
            par.put(node,parent);
            depth.put(node,depth_val);
        for arrays:
            par[node]=parent;
            depth[node]=depth_val;            
        */
    }
}
```

### The input format is usually the following:
- the first line contains n denoting the number of nodes
- n-1 lines follow <br> in each line, there are 2 values u and v denoting a parent node and its child node
- a single integer r denoting the root of the tree
- q denoting number of test cases/queries
- q lines with 2 integers x and y, which are nodes of the binary tree

Note:<br>
This is to be used only if the you wish to make your code flexible, that is make it usable for any binary tree<br>
Otherwise, hardcoding the tree is a viable solution, the template of which can be found [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/CONTRIBUTING.md) and [here](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/CONTRIBUTING(JAVA).md) <br>

**Happy Coding!**
