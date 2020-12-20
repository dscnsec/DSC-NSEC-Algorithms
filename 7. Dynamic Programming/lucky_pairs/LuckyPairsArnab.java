/*
 * LuckyPairsArnab.java
 * given 2 strings for each test case.Find the length of longest common subsequence and check if that is greater than or equal toCharArray
 * half the length of the maximum of 2 strings.
 * Description:-
 * Create a lcs[][] array(as done in a DP) problem which will store the common subsequence length from X[0-->i-1] and Y[0-->j-1]
 * where X and Y are 2 strings.Now the starting of lcs[0][j] or lcs[x][0] is always zero as there is no character in any one string
 * After that we take 1 character from x and start checkinh the entire length of y to see if its matching,if matching then we add 1 to 
 * the previous index value and store it in L[i][j] and if at indices characters are not matching we just take the maximum of
 * of the integers(one integer is the the same index of 1 string and 1 index before of other string and vice versa, this is because no characters
 * are matching hence it will attain maximum of the 2 integers,and we want maximum,hence doing max).In this way we continue,At the 
 * end at lcs[m][n] we get the largest common subsequence of 2 strings.Now check for the required condition.
 * Time Complexity-O(m*n) Space Complexity-O(m*n)
 * @author [codebook-2000](https://github.com/codebook-2000)
 */
 
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class LuckyPairsArnab {
    /* Returns length of Longest Common Subsequence for X[0..m-1], Y[0..n-1] */
    static boolean solve(char[] X, char[] Y, int m, int n) {
        int[][] lcs = new int[m + 1][n + 1];//This lcs[][] is the array which
        //Stores the subsequences length like
        // L[i][j] contains length of LCS of X[0-->i-1] and Y[0-->j-1]

        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    lcs[i][j] = 0;   //At starting its zero
                else if (X[i - 1] == Y[j - 1])
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;//Whenever its find a common character,it just increments by 1
                else
                    lcs[i][j] = Math.max(lcs[i - 1][j], lcs[i][j - 1]);//Then it checks the Maximum length among the 2
            }
        }
        int max = Math.max(n, m); //Storing the length of maximum length string in max
        //lcs[m][n] stores the longest common subsequence uptill the entire length of 2 strings
        //else false
        return lcs[m][n] >= (max) / 2;//If its greater than half of maximum length return treue
    }

    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(buf.readLine());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < t; i++) {
            String[] st1 = (buf.readLine()).split(" ");//Taking input
            char[] ch1 = st1[0].toCharArray();//storing in character arrays
            char[] ch2 = st1[1].toCharArray();
            int m = ch1.length;//calculating and storing lengths of strings
            int n = ch2.length;
            boolean ans = solve(ch1, ch2, m, n);//calling the method
            if (ans == true)
                sb.append("YES" + "\n"); //Appending the ans
            else
                sb.append("NO" + "\n");
        }
        System.out.println(sb);  //Printing it
    }
}
/*
input-
2
abcde ace
abcde afgh

output-
YES
NO
*/