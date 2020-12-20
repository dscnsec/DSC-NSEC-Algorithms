/**
 * GroupingMerlin.java
 * Remove y elements after the 1st x elements in a linked list
 *
 * Description-
 * If linked list size is <3, the list wont change at all
 * Otherwise, we take odd as our first odd node, even as our first even node, and start iterating from the 3rd node
 * In case it is an odd node, we add it after odd pointer
 * In case it is an even node, we add it after even pointer
 * Finally, we add the even list to the tail of odd list
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

class GroupingMerlin
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

            groupOddEven(head);
            while(head!=null)
            {
                sb.append(head.v+" ");
                head=head.next;
            }
            sb.append("\n");
        }
        System.out.print(sb);
    }

    static void groupOddEven(Node head)
    {
        if(head==null || head.next==null || head.next.next==null) return;
        Node cur=head.next.next;
        Node odd=head,even=head.next,etop=even;   //initializing the 1st 2
        int o=1;
        while(cur!=null)
        {
            if(o==1) //odd node
            {
                odd.next=cur;
                odd=odd.next;
            }
            else //even node
            {
                even.next=cur;
                even=even.next;
            }
            o^=1;    //o will be 1 for odd 0 for even
            cur=cur.next;
        }
        odd.next=etop;
        even.next=null;
    }
}


/*
sample i/p-
1
6
1 5 8 9 15 2

sample o/p-
1 8 15 5 9 2 
*/
