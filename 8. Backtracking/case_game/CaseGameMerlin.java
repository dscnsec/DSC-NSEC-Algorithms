/**
 * CaseGameMerlin.java
 *
 * Find all combinations of the alphanumeric string given
 *
 * Description-
 * Make a list of available strings (start with a null string)
 * Iterate the characters of the string 1 by 1
 * If any character is an alphabet, add both uppercase and lowercase characters to each string currently present in the list
 *  and thus update the list
 * Print the components of the list finally
 *
 * Time Complexity-O(2^n) Space Complexity-O(2^n)
 * @author merlin[https://github.com/m-e-r-l-i-n]
 */

import java.io.*;
import java.util.*;

class CaseGameMerlin
{
    public static void main(String args[])throws Exception
    {
        BufferedReader bu=new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb=new StringBuilder();
        int t=Integer.parseInt(bu.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(bu.readLine().trim());
            char s[]=bu.readLine().toCharArray();
            ArrayList<String> ans=solve(n,s);
            for(String st:ans)
                sb.append(st+"\n");
        }
        System.out.print(sb);
    }

    static ArrayList<String> solve(int n,char s[])
    {
        int i;
        ArrayList<String> res=new ArrayList<>();
        res.add("");
        for(i=0;i<n;i++)
        {
            ArrayList<String> tem=new ArrayList<>();
            for(String x:res)
                tem.add(x+s[i]);    //add the current character to all strings currently present in the list
            char c=s[i];
            if(s[i]>='a' && s[i]<='z') c=(char)(c-32);
            else if(s[i]>='A' && s[i]<='Z') c=(char)(c+32);

            if(c!=s[i]) //this means character was an alphabet
            {
                for(String x:res)
                    tem.add(x+c);   //adding the converted case character to every element in the list
            }
            res=tem;    //updating the list
        }
        return res;
    }
}

/*
sample i/p-
1
4
a1b2

sample o/p-
a1b2
A1b2
a1B2
A1B2
*/
