/**
 * RemoveImpostersMerlin.java
 * Remove y elements after the 1st x elements in a linked list
 *
 * Description-
 * Let us first iterate through the the 1st x nodes of the linked list and add them to the answer
 * Then we can skip the next y nodes
 * Finally we add the remaining nodes to the tail of the xth node, and we have our updated list
 *
 * Time Complexity-O(n), Space Complexity-O(1)
 *
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class Node
{
    int v;
    Node next;
    Node(int x)
    {
        v=x;
        next=null;
    }
}

class Start
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(bu.readLine());
            int i;
            Node head=null;
            String s[]=bu.readLine().split(" ");
            for(i=0;i<n;i++)
            {
                int x=Integer.parseInt(s[i]);
                Node cur=new Node(x);
                if(head==null) head=cur;
                else
                {
                    Node ptr=head;
                    while(ptr.next!=null) ptr=ptr.next;
                    ptr.next=cur;
                }
            }

            s=bu.readLine().split(" ");
            int x=Integer.parseInt(s[0]),y=Integer.parseInt(s[1]);
            removeImposters(head,x,y);
            while(head!=null)
            {
                sb.append(head.v+" ");
                head=head.next;
            }
            sb.append("\n");
        }
        System.out.print(sb);
    }

    static void removeImposters(Node head,int x,int y)
    {
        Node cur=head;
        Node last=new Node(0);
        while(cur!=null && x>0)     //addup the 1st x elements in the ans list
        {
            x--;
            last=last.next; //this is essential in all but 1st node
            last=cur;
            cur=cur.next;
        }
        while(cur!=null && y>0)     //skip the 1st y elements
        {
            y--;
            cur=cur.next;
        }
        last.next=cur;  //add up the remaining elements
    }
}


/*
sample i/p-
1
10
1 2 3 4 5 6 7 8 9 10
2 3
sample o/p-
1 2 6 7 8 9 10
*/
