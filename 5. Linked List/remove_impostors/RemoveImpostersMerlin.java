/**
 * RemoveImpostersMerlin.java
 * Remove y elements after the 1st x elements in a linked list
 *
 * Description-
 * Let us first iterate through the the 1st x nodes of the linked list and add them to the answer
 * Then we can skip the next y nodes
 * Then we add x nodes again, and the process continues on and on until we have reached the end of the linked list
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

class RemoveImpostersMerlin
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
            Node head=null,ptr=null;
            String s[]=bu.readLine().split(" ");
            for(i=0;i<n;i++)
            {
                int x=Integer.parseInt(s[i]);
                Node cur=new Node(x);
                if(head==null)
                {
                    head=cur;
                    ptr=head;
                }
                else
                {
                    ptr.next=cur;
                    ptr=ptr.next;
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
        int tx=x,ty=y;
        while(cur!=null)
        {
            if(x>0)
            {
                last.next=cur;  //adds node to the tail
                last=last.next; //points to the added node
                x--;
            }
            else if(y>0) y--;
            cur=cur.next;
            if(y==0 && x==0) {x=tx; y=ty;}  //first iterate for x positions, then y, and then reset count
        }
        last.next=null; //suppose there are k elements which should not be added, they need to be removed
    }
}


/*
sample i/p-
1
10
1 2 3 4 5 6 7 8 9 10
2 3
sample o/p-
1 2 6 7
*/
