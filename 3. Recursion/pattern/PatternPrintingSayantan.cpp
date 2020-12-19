/**
 * @file Pattern
 * @brief It has come to notice that the visibility of the impostors can be reduced by 25%
          if a particular pattern can be designed at weapons so we need to print a pattern using recursion
 * @approach In this question we are using two recursive function one for changing the row and the other for printing the number
             for the desired pattern. In the printing pattern function we are passing the number of rows and the starting row
             and gradually increasing the row number and decreasing the number of row. and in the next recursion function println
             we are passing the current row value and a value which initially has a value 1 then we decrease the current row value
             and increase the value.
 * @details
 * Time complexity O(n^2) and space complexity O(1)
 * It has come to notice that the visibility of the impostors can be reduced by 25% if a particular
   pattern can be designed at weapons. To gain an upper hand over the impostors, can you help your
   crewmate in forming the pattern? NOTE: Use recursion only
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases. T test cases follows
   The first and only line of each test case contains a single digit N Output
   For each test case, print N rows of the pattern
 * Sample input :
   1
   5
 * Sample output :
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
 * @author [Sayantan bose](https://github.com/sayantan1413)
 */

#include <bits/stdc++.h>
using namespace std;

//Function to print the value
void println(int startingRow, int value)
{
    if( startingRow == 0 )
    {
        return;
    }
    cout<<value<<" ";
    println( startingRow - 1, value + 1 ); //decreasing the current row value and increasing the value
}

//Function to change go to the next row
void patternPrinting(int totalNumberOfLine, int startingRow)
{
    int value = 1;
    if(totalNumberOfLine == 0)
    {
        return;
    }
    println(startingRow, value);
    cout<<endl;
    patternPrinting(totalNumberOfLine - 1, startingRow+1); //decreasing the total number of row and increasing the starting row
}

//Function to take the input of total number of row
void solve() {
  //write your code here
  int totalNumberOfLine,startingRow = 1;
  cin>>totalNumberOfLine;
  patternPrinting(totalNumberOfLine, startingRow);
}

// Main function

int main() {
  int t;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}