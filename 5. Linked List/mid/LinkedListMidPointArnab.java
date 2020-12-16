import java.io.BufferedReader;
import java.io.InputStreamReader;

class Node<T> {
    T data;   //Its a generic class
    Node next;//next stores the reference of the next node

    public Node(T data) {
        this.data = data;
    }//initializes the data part of the object
}

class LinkedListMidPointArnab {
    static int solve(Node head) { //This method calculates the mid point
        Node tnode = head;  //Starting from head node
        int ct = 0; //Taking the total count of no of nodes
        while (tnode != null) { //Untill null is received,continue updating node
            ct++;
            tnode = tnode.next;
        }
        int mid = (ct / 2) + 1; //Calculating mid point
        int i = 1;  //Starting from first node
        tnode = head;
        while (i != mid) {  //As soon as mid point is achieved break the loop
            tnode = tnode.next;
            i++;
        }
        return (int) tnode.data; //Return data part
    }

    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(buf.readLine());//Taking the number of nodes as input
        Node head = null, last = null;//Initializing head and last node as null
        String[] st1 = (buf.readLine()).split(" ");
        for (int i = 0; i < n; i++) {
            int a = Integer.parseInt(st1[i]);//Storing in a;
            Node node = new Node<Integer>(a); //Creating a node of class Node
            if (i == 0) {
                head = node;//For the first node initialize head and last to first node
                last = node;
            } else {//For the next nodes update last to the last node and connecting each node
                last.next = node;
                last = node;
            }
        }
        int ans = solve(head);//Passing the head node as parameter
        System.out.println(ans);//Print the ans;
    }
}
