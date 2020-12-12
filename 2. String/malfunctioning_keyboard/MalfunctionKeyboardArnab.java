/**
 * MalfunctionKeyboard.java
 * Given a String s,where each normal character gets printed only 1 at a time,but malfunctioning characters gets printed 
 * twice at a time.We have to determine those normal characters.
 * Description:-
 * We first convert the string to an array of characters.Then we start taking 2 characters at a time,and start checking
 * whether they are equa or not,if yes,then increment j by 2, else we take one of that character as the normal character.
 * At the end since by incrementing by 2,we might miss the end index,hence we take a separate case to check the value at
 * end index to be normal or malfunctioning.
 * In all these we use the Data Structure Set, so that the character stored are unique.
 * Time Complexity-O(n) Extra Space Complexity-O(n);
 *  @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.util.*;
import java.lang.*;
import java.io.*;

public class MalfunctionKeyboardArnab
{
    static String solve(char ch[])
    {
        Set<Character> set=new HashSet<Character>(); //Declaraing the set DS 
        String st="";
        if(ch.length==1)      //Dealing with a corner case for size==1
            st+=ch[0];
        else
        {
            int j=1;         //Starting from index 1;
            while(j<ch.length)
            {
                if(ch[j]==ch[j-1])   //If its equal to previous value increment by 2
                    j=j+2;
                else
                {
                    set.add(ch[j-1]); //Else add to set and increment by 1 
                    j++;
                }
            }
            if(ch[ch.length-1]!=ch[ch.length-2])  //Finally dealing with the last index(if got missed)
                set.add(ch[ch.length-1]);
            for(char x:set)
                st+=x;  //Converting the set of characters to string 
        }
        return st;
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(buf.readLine());
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<t;i++)
        {
            String s=buf.readLine();      //Taking input
            char ch[]=s.toCharArray();    //Converting to array of characters
            String ans=solve(ch);         //Calling the method by passing the array 
            sb.append(ans+"\n");          
        }
        System.out.println(sb);      //Printing it 
    }
}

/*
Input:-
4
a
zzaaz
ccff
cbddbb

Output:-
a
z

bc
*/
