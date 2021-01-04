/*
 * CaseGameArnab.java
 * Given a Alphanumeric string.We have to print all possible combination of the string with altering the letters in their
 * Upper and Lower cases.
 * Description:-
 * Try to make a list of all available strings(Initiating with a null string)
 * Then iterate through thw string using a loop.As soon as a character is encountered check if its upper case or lower case.If upper case
 * then convert to lowercase,else convert to uppercase, and if its a digit leave it as it is.Then add the updated character to every
 * element in the list.And then at the end of the loop,refer the address of the update list to the main list so that it contains all changes.
 * Time Complexity-O(2^n) Space Complexity-O(2^n) as we are printing all combinations of a string
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class CaseGameArnab {
    static ArrayList<String> solve(int n, char[] ch) {
        ArrayList<String> adj = new ArrayList<String>();
        adj.add(""); //adding null string as an initiator to the list
        for (int i = 0; i < n; i++) {
            ArrayList<String> update = new ArrayList<String>(); //This arraylist will contain all the changes made in the string combinations
            for (int j = 0; j < adj.size(); j++) {
                String st = adj.get(j) + ch[i];
                update.add(st);     //adding the current character to all strings currently present in the arraylist
            }
            char c = ch[i];
            if (Character.isLetter(c) == true) //Check its a letter or not
            {
                if (Character.isUpperCase(c) == true)  //Check if its uppercase,then convert to Lowercase
                    c = Character.toLowerCase(c);
                else
                    c = Character.toUpperCase(c);  //else vice versa
                for (int j = 0; j < adj.size(); j++) {
                    String st = adj.get(j) + c;
                    update.add(st);      //Now adding the converted case character to every element in the arraylist
                }
            }
            adj = update;    //Assigning all the changes made in update to the original arraylist by completely changing its reference
        }
        return adj; //return the arraylist
    }

    public static void main(String[] args) throws Exception {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(buf.readLine());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(buf.readLine());
            char[] ch = (buf.readLine()).toCharArray(); //reading input
            ArrayList<String> ans = solve(n, ch); //calling the method
            for (int j = 0; j < ans.size(); j++)
                sb.append(ans.get(j) + "\n");  //Hence appending it
        }
        System.out.print(sb); //then printing it
    }
}

/*
Input:-
1
4
a1b2

Output:-
a1b2
A1b2
a1B2
A1B2
*/
