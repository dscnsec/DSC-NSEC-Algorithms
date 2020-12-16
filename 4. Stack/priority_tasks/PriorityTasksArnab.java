/*
 * PriorityTasksArnab.java
 * Given an array of priority values,we have to check if the value next is of higher priority or not.If yes, then print that value,else
 * Print -1.At the end consider it as circular array,and for the last value check if any higher value to it exists in the array uptill (n-2)th element as the (n-1)th
 * element is the last value itself,so we would check before that value only if any value higher to it is present or not.
 * If yes,then print it,else print -1.
 * Description:-
 * Create a stack.First push the first value of stack.Then start from index 1 and check if the current value is higher than the
 * peek value of stack.If yes push it to stack and add it to ArrayList.Else add -1 to arraylist and add that corresponding value to stack
 * again.Then for the last priority,run a loop from 0 to n-2,and check if any value greater than last is present if yes,
 * then add it to ArrayList else add -1 to ArrayList 
 * Time Complexity-O(n) Space Complexity-O(n)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Stack;

public class PriorityTasksArnab {
    static ArrayList<Integer> solve(int[] arr, int n) {
        Stack<Integer> st = new Stack<Integer>(); //Creating the stack
        ArrayList<Integer> adj = new ArrayList<Integer>();//Creating an arrayList to return the values according
        //According to priority
        int j = 1;//Values checking should start from index 1 as first value is already entered in stack
        st.push(arr[0]);//First value is pushed in stack
        while (j < n) {
            if (arr[j] > st.peek()) {
                adj.add(arr[j]);//If the priority value is more than peek value,then add that value to
                st.push(arr[j]);//arraylist and stack and increment j by 1
                j++;
            } else {
                adj.add(-1);//Else if less or equal then add -1 to arraylist and the value to stack
                st.push(arr[j]);//and increment j by 1
                j++;
            }
        }
        int flag = 0;  //Now for checking the last priority we are doing this
        for (j = 0; j < n-1; j++) {
            if (arr[j] > st.peek()) {
                flag = 1; //If we find a value greater than last value of stack,then add that to arrayList
                adj.add(arr[j]);
                break;
            }
        }
        if (flag == 0)
            adj.add(-1);//If no such value found add -1 to arraylist
        return adj;
    }

    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(buf.readLine());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(buf.readLine()); //Reading the input
            String[] st1 = (buf.readLine()).split(" ");

            int[] arr = new int[n];
            for (int j = 0; j < n; j++)
                arr[j] = Integer.parseInt(st1[j]);

            ArrayList<Integer> ans = solve(arr, n);  //Calling the method solve each time and storing it in arraylist

            for (int j = 0; j < ans.size(); j++)
                sb.append(ans.get(j) + " ");  //Appending the arraylist
            sb.append("\n");
        }
        System.out.println(sb);  //Printing it
    }
}

/*
Input:-
2
3
1 2 1
4
1 3 4 2

Output;-
2 -1 2 
3 4 -1 3 
*/
