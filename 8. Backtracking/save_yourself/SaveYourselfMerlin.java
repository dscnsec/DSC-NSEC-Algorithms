/**
 * SaveYourselfMerlin.java
 *
 * Print all palindromic partitions of a string using backtracking
 *
 * Description-
 * Start from the 0th index and keep traversing the string one index at a time
 * If the current substring is a palindrome, add it to the result
 * Recur from the current position to the end and find out all possible combinations
 * After recursion is over, remove the current string that was added and move on to the next index
 *
 * Time Complexity-O(n*2^n) where n is length of string
 *  the outer loop of iterating through the string will take O(n) time
 *  the inner loop(recursion) where we keep add and removing substrings will take O(2^n) time
 *  hence the total time complexity is O(n*2^n)
 *  Note: Every time we need to check for a palindrome, it takes O(n) too, hence the time complexity should be O((n^2)*(2^n)
 *  But for this case, we are precalculating which substrings are palindromes in O(n^2)
 *  Hence total time complexity=O(n^2+n*2^n)~O(n*2^n)
 *
 * Space Complexity-O(n*s) where s is number of partitions possible
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class Start
{
    static BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));

    public static void main(String args[])throws Exception
    {
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {
            String s=bu.readLine();
            ArrayList<ArrayList<String>> ans=solve(s);
            for(ArrayList<String> al:ans)
            {
                for(String st:al)
                    sb.append(st+" ");
                sb.append("\n");
            }
        }
        System.out.print(sb);
    }

    static ArrayList<ArrayList<String>> solve(String s)
    {
        int i,j,n=s.length();

        boolean palin[][]=new boolean[n][n];    //using this, we will keep a track which substrings are palindrome which are not
        for(i=0;i<n;i++)
            palin[i][i]=true;   //note that palin[i][j] will give us if string[i..j] is a palindrome or not

        for(i=2;i<=n;i++)   //i is substring length
        for(j=0;j<n-i+1;j++)    //j will be starting index of substring
        {
            int end=j+i-1;
            if(i==2)    // since 2 consecutive characters can be checked for palindrome only in the normal manner, we do so
                palin[j][end]=s.charAt(j)==s.charAt(end);
            else    //if size>2 then we need to calculate the last indices only, because the previous ones are precalculated
                palin[j][end]=(s.charAt(j)==s.charAt(end)) & palin[j+1][end-1];
        }

        ArrayList<ArrayList<String>> res=new ArrayList<>();
        Stack<String> st=new Stack<>();
        partitions(s,res,st,0,palin);
        return res;
    }

    static void partitions(String s,ArrayList<ArrayList<String>> res,Stack<String> st,int begin,boolean palin[][])
    {
        if(begin>=s.length())   //if start has exceeded end, it means we have found a partition
        {
            Iterator<String> it=st.iterator();
            ArrayList<String> tem=new ArrayList<>();
            while(it.hasNext())
                tem.add(it.next());
            res.add(tem);
            return;
        }

        for(int i=begin;i<s.length();i++)
        if(palin[begin][i]) //we can partition only if substring is a palindrome
        {
            st.add(s.substring(begin,i+1)); //add the substring
            partitions(s,res,st,i+1,palin); //fetch all permutations
            st.pop();   //remove the substring
        }
    }
}

/*
sample i/p-
2
aab
nitin

sample o/p-
a a b
aa b
n i t i n
n iti n
nitin
*/
