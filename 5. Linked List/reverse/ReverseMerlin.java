/**
 * ReverseMerlin.java
 * Reverse a linked list
 *
 * Description-
 * Iterate through the list
 * For any 2 consecutive numbers, add the previous node to the tail of the 2nd node
 *
 * Time Complexity-O(n), Space Complexity-O(1)
 *
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class Node
{
    Node next;
    int v;
    Node(int x)
    {
        v=x;
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
            String s[]=bu.readLine().trim().split(" ");
            int i,a;
            Node head=null;
            for(i=0;i<s.length;i++)
            {
                a=Integer.parseInt(s[i]);
                Node cur=new Node(a);
                if(head==null) head=cur;    //this is taking the linked list as input
                else
                {
                    Node ptr=head;
                    while(ptr.next!=null)
                        ptr=ptr.next;
                    ptr.next=cur;
                }
            }

            head=reverse(head);
            while(head!=null)
            {
                sb.append(head.v+" ");
                head=head.next;
            }
            sb.append("\n");
        }
        System.out.print(sb);
    }

    static Node reverse(Node head)
    {
        Node prev=null;
        while(head!=null)
        {
            Node tem=head.next; //temporarily storing the next node
            head.next=prev; //the next node will come before the previous node when list is reversed
            prev=head;  //now node has been placed to its original position
            head=tem;   //head is now the next node that has not been accessed
        }
        head=prev;
        return head;
    }
}


/*
sample i/p-
1
1 2 3 4 5

sample o/p-
5 4 3 2 1
*/
