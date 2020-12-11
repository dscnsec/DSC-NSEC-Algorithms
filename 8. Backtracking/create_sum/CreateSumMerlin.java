/**
 * CreateSumMerlin.java
 *
 * Given set of numbers and sum, print all combinations with given number
 *
 * Description-
 * Take all numbers into an array
 * Start from the first index and keep taking numbers one by one
 * By one by one it us meant that one can take the i'th number again too, since it is a valid operation
 * One can choose coins as long as remaining deficit sum for the current combination is >0
 * If sum becomes<0, we can be sure that the given combination is not possible
 * If sum=0, this is a valid combination, append it to result
 *
 * Time Complexity-O(c^n) where c is the size of numbers array and n is the target sum
 * Space Complexity-O(m*c) where m is maximum number of combinations possible
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class CreateSumMerlin
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {
            String s[]=bu.readLine().trim().split(" ");
            int n=Integer.parseInt(s[0]),sum=Integer.parseInt(s[1]),i;
            int c[]=new int[n];
            s=bu.readLine().split(" ");
            for(i=0;i<n;i++)
                c[i]=Integer.parseInt(s[i]);

            ArrayList<Integer> ans=solve(n,sum,c);
            if(ans.size()==0) continue;
            i=1;
            int sz=-ans.get(0);
            //every element that is negative denotes the number of next elements that are there which form a combination
            while(true)
            {
                while(sz!=0)
                {
                    sb.append(ans.get(i)+" ");
                    i++;
                    sz--;
                }
                sb.append("\n");
                if(i!=ans.size()) sz=-ans.get(i++);
                else break;
            }
        }
        System.out.print(sb);
    }

    static ArrayList<Integer> solve(int n,int sum,int c[])
    {

        ArrayList<Integer> res=new ArrayList<>();   //store our results
        Stack<Integer> st=new Stack<>();    // using a stack pushing popping functions becomes easier
        combinations(c,sum,res,st,0);
        return res;
    }

    static void combinations(int c[],int sum,ArrayList<Integer> res,Stack<Integer> s,int begin)
    {
        if(sum==0)
        {
            res.add(-s.size());     //this is a simple thing needed to print results, since no number can have -ve value
            Iterator<Integer> it=s.iterator();
            while(it.hasNext()) res.add(it.next());
            return;
        }

        for(int i=begin;i<c.length;i++)
        if(c[i]<=sum)
        {
            s.add(c[i]);    //add the number
            combinations(c,sum-c[i],res,s,i);   //find combinations that are possible with the number
            s.pop();    //remove the number
        }
    }
}

/*
sample i/p-
2
4 7
2 3 6 7
3 13
2 4 3

sample o/p-
2 2 3
7
2 2 2 2 2 3
2 2 2 4 3
2 2 3 3 3
2 4 4 3
4 3 3 3
*/
