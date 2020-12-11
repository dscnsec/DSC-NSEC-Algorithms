/**
 * UniqueCharacterArnab.java 
 * Given a string.Return the index of the first occurence of the character which appears only once in the entire string
 * Description:-
 * Take the array of characters,Calculate the count of each letter in a count array.Then run a loop from 0 to n-1, and check for
 * each character if its count==1 or not.If yes, then return the first such encountered character's index.If no such
 * character found return -1;
 * Time complexity-O(n) Space Complexity-O(1)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.util.*;
import java.lang.*;
import java.io.*;

public class Unique_Character
{
    static int solve(char ch[],int n)
    {
        int cnt[]=new int[26];  //This is the count array to store the occurences of characters
        for(int j=0;j<n;j++)
            cnt[ch[j]-'a']++;      //Stores the count 
        int flag=0,index=-1;
        for(int j=0;j<n;j++)
        {
            char c=ch[j];
            if(cnt[c-'a']==1)       //For each character encountered in the character array,we are checking if its count=1
            {                       //If yes,then storing the index and break.
                flag=1;
                index=j;
                break;
            }
        }
        if(flag==0)     //If no such character found,return -1;
            return -1;
        else
            return index; //Else return index;
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(buf.readLine());
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<t;i++)
        {
            int n=Integer.parseInt(buf.readLine());   //Input of length of string
            String s=buf.readLine();               //Input of string 
            char ch[]=s.toCharArray();             //String converted to Array of characters
            int ans=solve(ch,n);                   //Calling the method,passsing array of characters and length as argument
            sb.append(ans+"\n");
        }
        System.out.println(sb);          //Printing the indexes
    }
}

/*
Input:-
2
9
chocolate
6
papaya

Output:-
1
4