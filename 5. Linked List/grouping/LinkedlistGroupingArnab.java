/**
 * LinkedListGroupingArnab.java
 * Print a Linked List with all even indices arranged first,and then the odd indices
 * Description:-
 * The approach is simple,just store the even and odd position values in 2 separate arraylist and then create a separate linked 
 * list with the required arrangement from that arraylist.
 * Time Complexity-O(n) Space Complexity-O(n)
 *@author [codebook-2000](https://github.com/codebook-2000)
 */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

class Node<T> {
    T data;   //Its a generic class
    Node next;//next stores the reference of the next node

    public Node(T data) {
        this.data = data;
    }//initializes the data part of the object
}

class LinkedListGroupingArnab {
    static Node solve(Node head)//method for grouping
    {
        //ArrayList for storing the even values
        ArrayList<Integer> even = new ArrayList<Integer>();
        //ArrayList for storing the odd values
        ArrayList<Integer> odd = new ArrayList<Integer>();
        //ct is to take count for the odd and even positions
        int ct = 0;
        Node tnode = head;
        while (tnode != null) {
            if (ct % 2 == 0)//storing data in even arraylist
                even.add((int) tnode.data);
            else//storing data in odd arraylist
                odd.add((int) tnode.data);
            ct++;
            tnode = tnode.next;
        }
        int e = 0, o = 0;
        Node ans = null, last = null;
        for (int i = 0; i < ct; i++)//ct gives the count of no of elements
        {
            Node a;//creating a complete new linked list with the new grouping using
            //the datas of the arraylist
            if (i < even.size()) {//first storing the even indices
                a = new Node<Integer>(even.get(e));
                e++;
            } else {//then the odd indices
                a = new Node<Integer>(odd.get(o));
                o++;
            }
            if (i == 0) {//Now just the same way as we did at the input
                ans = a;//For the first node initialize head and last to first node
                last = a;
            } else {//For the next nodes update last to the last node and connecting each node
                last.next = a;
                last = a;
            }
        }
        return ans;//return the head of the new Linked List
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

        Node ans = solve(head);//Passing the head node as parameter
        Node output = ans;
        while (output != null) {
            System.out.print(output.data + " ");//Printing the values in new arrangement
            output = output.next;
        }
    }
}

/*
Input:-
6
1 5 8 9 15 2
Output:-
1 8 15 5 9 2 
*/
