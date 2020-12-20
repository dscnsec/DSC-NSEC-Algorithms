/**
 * MidMerlin.java
 * Middle element of a linked list
 *
 * Description-
 * Consider any linkedlist of size n
 * Its mid point is n/2
 * This means that we can find mid if we can iterate exactly n/2 times, and total number of jumps if we can skip one element is n/2 as well
 * Thus, we use 2 pointers, one fast, which will do the jumps so that we iterate exactly n/2 times
 * Another is the slow pointer which will move n/2 times but not skip any node
 * Thus, the value at node slow is our answer.
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

class MidMerlin
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
                    cur.next=head;
                    head=cur;
                }
            }
            int mid=getmid(head);
            sb.append(mid+"\n");
        }
        System.out.print(sb);
    }

    static int getmid(Node head)
    {
        if(head==null) return 0;
        Node fast=head, slow=head;
        while(fast!=null && fast.next!=null)
        {
            fast=fast.next.next;
            slow=slow.next;
        }
        return slow.v;
    }
}


/*
sample i/p-
2
5
1 2 3 4 5
4
2 3 4 5

sample o/p-
3
3
*/
