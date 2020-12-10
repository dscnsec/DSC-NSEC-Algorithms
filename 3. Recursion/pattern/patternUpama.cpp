/**
  * patternUpama.cpp
  * Description :- here the first function that means "Rows" it prints the rows recursively, it first calls 
  * itself then prints, so that first 1->2->3->3... can print because we have started from the number "n"
  * here the base is n<1 , when the function stops calling itself. 
  *
  * after that the solve function calls itself for row number one, then calls Rows function to print
  * the rows , after that, it ends the line using "endl" . Here the base is again n<1 . 
  * 
  * In the main function, t is the number of test cases, and n is the number of rows , that we wanna print
  * after taking the inputs, it will call the solve function for n value.
  * 
  * Time complexity-O(n) Space complexity-O(1)
  * @author[chaltidutta](https://github.com/chaltidutta)
 **/

#include<bits/stdc++.h> 
using namespace std; 

void Rows(int n) { 
    if (n < 1) 
        return;   
    Rows(n-1); // calling itself(recursive call)
    cout <<n<<" "; //prints the col wise numbers
} 
  
void solve(int n) { 
    if (n < 1) 
        return; 
    solve(n-1); //calls itself (recursive call)   
    Rows(n);   //calls Rows function for print values of the respective rows
    cout << endl;     
}  
int main() { 
    int t; //test case
    cin>>t;
    while(t-->0){ //condition to maintain the testcase
        int n; //number of rows
        cin>>n;
        solve(n); //recursive function
    }
    return 0; 
}

/*
 input - 
 1
 5

 output -
 1   
 1 2 
 1 2 3
 1 2 3 4 
 1 2 3 4 5
*/

