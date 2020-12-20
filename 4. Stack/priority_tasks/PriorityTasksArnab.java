/*
 * PriorityTasksArnab.java
 * Given an array of priority values,we have to check if the value next is of higher priority or not.If yes, then print that value,else
 * Print -1.At the end consider it as circular array,and for the last value check if any higher value to it exists in the array uptill (n-2)th element as the (n-1)th
 * element is the last value itself,so we would check before that value only if any value higher to it is present or not.
 * If yes,then print it,else print -1.
 * Description:-
 * Create a stack for storing indices and accordingly reach values of stack.Now start the loop,if stack is empty then push index 
 * to stack.Else continue checking as if a value higher than the current peek value of stack is there or not
 * If yes then pop from stack and continue popping unless a higher value to the current value is achieved and push them to corresponding
 * index from stack.And at the same time check if array index has reached n-1,If yes then break from loop.
 * After the loop,we have only indices of maximum elements left in stack,hence just pop() all indices and at that indices assign -1 to output array
 * Time Complexity-O(n) Space Complexity-O(n)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class PriorityTasksArnab {
    static int[] solve(int[] arr, int n) {
        Stack<Integer> index = new Stack<Integer>();//creating the stack to store respective
        //indices and from indices we would compare values

        int[] ans = new int[n];//Our output array

        int j = 0;
        while (true)  //No condition barrier at while loop
        {
            if (index.isEmpty() == true) {
                index.push(j % n);//If stack is empty,push the first index
                j++;
            } else {
                if (arr[index.peek()] < arr[j % n])//If a higher value than stack peek value is
                {//reached then pop the current index from stack and
                    int in = index.pop();//at that index push the current value to the output array;
                    ans[in] = arr[j % n];
                    if (in == n - 1)//check the same condition here
                        break;
                } else { //If smaller or equal value is present then push index to stack 
                    index.push(j % n);
                    j++;
                }
            }
        }
        while (index.isEmpty() == false) //Now for the elements which are maximum and would
        {//get -1 in their indices
            int in = index.pop();
            ans[in] = -1;
        }

        return ans;//return the array
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

            int[] ans = solve(arr, n);  //Calling the method solve each time and storing it in arraylist

            for (int j = 0; j < ans.length; j++)
                sb.append(ans[j] + " ");  //Appending the arraylist
            sb.append("\n");
        }
        System.out.println(sb);  //Printing it
    }
}

/*
Input:-
3
3
1 2 1
4
1 3 4 2
6
3 2 6 7 1 2

Output;-
2 -1 2 
3 4 -1 3 
6 6 7 -1 2 3 
*/
