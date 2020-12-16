/**
 * SpringThrowArnab.java
 * given an array of spring and blocks with their ranges of throws.Calculate the minimum number of spring throws required to reach the end of the blocks
 * Description:-
 * Just check for every spring whats the maximum distance it can send the person,in this way update the current position,and keep 
 * on calculating max.When j reaches that current position,one cycle of spring throw is completed,hence update the count by 1
 * And then make current to the next maximum uptill then.That's how it will continue uptill n-1.As there it will always be ending 
 * at the last block by any means.But in the meatime if max distance reaches n, we will just update count by 1 and break.
 * Time Complexity-O(n) Extra Space Complexity-O(1)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;

class WinterOfCode {
    static int solve(int[] arr, int n) {
        //ct stores the count of no of throws
        //max stores the maximum distance upto which every spring can send the person
        //current is the point uptill where person can go by the string after which it needs to get updated

        int j = 0, ct = 0, max = 0, current = 0;
        while (j < n - 1) {  //calculating till n-2 as after it it will directly be at last index
            max = Math.max(max, arr[j] + j);//storing the maximum of all distances it can travel
            if (j == current) {//as long as j is not equla to current max stores the maximum value
                current = max;//As soon as current is reached by j,it updates the current to the next maximum
                //In this way we always get the maximum of maximum spring throw.
                ct++;//And there we aew updating the count of throws
            }
            if (max >= n) //As sson as maximum distance reaches greater than or equal to m,
            {       //increment count by 1 and break it,coz we have reached the end.
                ct++;
                break;
            }
            j++;//Update j
        }
        return ct;//return ct;
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

            int ans = solve(arr, n);  //Calling the method solve each time and storing it in arraylist

            sb.append(ans + "\n");
        }
        System.out.println(sb);  //Printing it
    }
}

/*
Input:-
2
11
1 3 5 8 9 2 6 7 6 8 9
11
1 1 1 1 1 1 1 1 1 1 1
Output:-
3
10
*/
