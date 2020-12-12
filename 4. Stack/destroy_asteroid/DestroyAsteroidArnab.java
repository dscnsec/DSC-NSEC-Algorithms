/**
 * DestroyAsteroidArnab.java
 * Given an array of asteroid sizes with positive and negative signs,positive meaning travelling towards right and negative
 * means trallening towards left.Asked to find out the final state of the asteroids as to which asteroids will remain 
 * after collision if asteroids travel with same speed and after collision smaller size asteroid gets abloished.
 * Description:-
 * Create a stack which will store asteroids travelling in a particular direction,as soon as a asteroid travelling in a 
 * different direction is encountered, compare the peek value of stack with that as to if that asteroid is interferring with the 
 * previous asteroid.If yes,then check which will destroy and which will remain,update the stack accordingly and then proceed
 * After the loop the asteroid present in the stack are the ones to remain after collision.Use a ArrayList to print the 
 * Stack in reverse order.
 * Time Complexity-O(n) Extra Space Complexity-O(n)
 * @author [codebook-2000] (https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Stack;

public class DestroyAsteroidArnab {
    static ArrayList<Integer> solve(int[] arr, int n) {
        Stack<Integer> st = new Stack<Integer>(); //Creating the stack
        int j = 0;

        while (j < n)       //Starting the loop
        {
            if (st.isEmpty() == true) {  //If stack is empty,then whatever negative or positive push to stack
                st.push(arr[j]);
                j++;
            } else {
                if (arr[j] > 0) {   //Now if the current element is positive it won't hamper the state of asteroids
                    st.push(arr[j]);
                    j++;
                } else {
                    if (st.peek() < 0) {
                        st.push(arr[j]);  //If the current element is negative and the previous is also negative
                        j++;     //Then also it won't hamper
                    } else { //Now if current is negative and previous is positive then it may hamper
                        int prev = Math.abs(st.peek()); //Storing the current in curr and previous in prev
                        int curr = Math.abs(arr[j]);
                        if (prev == curr) {
                            st.pop(); //If both sizes got equal then both get destroyed hence pop and increment j;
                            j++;
                        } else if (prev > curr)
                            j++;//if previous is greater than current then current is destroyed,hence increment j
                        else {
                            st.pop();//else pop the previous and push the current asteroid
                            st.push(arr[j]);
                            j++;
                        }
                    }
                }
            }
        }
        //To maintain the order of printing the asteroids we are storing in the arraylist,so that we can
        //print from bottom of stack
        ArrayList<Integer> adj = new ArrayList<Integer>();
        j = 0;
        while (st.isEmpty() == false)
            adj.add(st.pop()); //Storing it in arraylist
        return adj; //returning it


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

            for (int j = ans.size() - 1; j >= 0; j--)
                sb.append(ans.get(j) + " ");
            sb.append("\n");
        }
        System.out.println(sb);  //Printing it
    }
}

/*
Input:-
4
3
5 10 -5
2
8 -8
3
10 2 -5
4
-5 -1 1 5

Output:-
5 10 

10 -5 
-5 -1 1 5 
*/
