/*
 * PriorityTasksArnab.java
 * Given an array of priority values,we have to check if the value next is of higher priority or not.If yes, then print that value,else
 * Print -1.At the end consider it as circular array,and for the last value check if any higher value to it exists in the array uptill (n-2)th element as the (n-1)th
 * element is the last value itself,so we would check before that value only if any value higher to it is present or not.
 * If yes,then print it,else print -1.
 * Description:-
 * Create 2 stacks,1 for index and other for storing values.Now start the loop,if stack is empty then push index and value to respective
 * stacks,Else check if the if the current value is the maximum value or not,if yes then just put -1 there in output array at
 * corresponding index.Else continue checking as if a value higher than the current peek value of stack is there or not
 * If yes then pop from stack and continue popping unless a higher value to the current value os achieved and push them to corresponding
 * index from index stack.And at the same time check if array index has reached n-1,If yes then break from loop.
 * Time Complexity-O(n) Space Complexity-O(n)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class PriorityTasksArnab {
    static int[] solve(int[] arr, int n) {
        Stack<Integer> st = new Stack<Integer>(); //Creating the stack to store values
        Stack<Integer> index = new Stack<Integer>();//creating the stack to store respective
        //indices

        int[] ans = new int[n];//Our output array
        int max = -1;//Finding the maximum element and storing it in max;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= max)
                max = arr[j];//calculating max element
        }

        int j = 0, ct = 0;
        while (true)  //No condition barrier at while loop
        {
            if (st.isEmpty() == true) {
                st.push(arr[j % n]);//If stack is empty then push value and indices at
                //respective stacks and use j%n, so that we get circular array
                index.push(j % n);
                j++;
            } else {
                if (st.peek() == max) //Now if max value is attained a=that index will always
                {//be -1 as no higher value to it is there in the array
                    int in = index.pop();
                    ans[in] = -1;//Assigning it to -1
                    st.pop();
                    if (in == n - 1)//checking if n-1 is reached then break from loop as our
                        break; //output array is created
                } else {
                    if (st.peek() < arr[j % n])//If a higher value than stack peek value is
                    {//reached then pop the current value and current index from stack and
                        int in = index.pop();//at that index push the current value;
                        ans[in] = arr[j % n];
                        st.pop();
                        if (in == n - 1)//check the same condition here
                            break;
                    } else {//If the value is samaller or equal to peek value push the current index and
                        st.push(arr[j % n]);//value to stack
                        index.push(j % n);
                        j++;
                    }
                }
            }
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

            int[] ans = solve(arr, n);  //Calling the method solve each time and storing it in array

            for (int j = 0; j < ans.length; j++)
                sb.append(ans[j] + " ");  //Appending the array values
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
