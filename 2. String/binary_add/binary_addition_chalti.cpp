/* 
* binaryAddition.cpp
* this program is for adding two binary numbers.
* formula for binary addition - 0+1=1  carry=0
                                0+0=0  carry=0
                                1+0=1  carry=0
                                1+1=0  carry=1
* the main algoritthm behind the code is, we will last from the first digit of both of the strings and add them, if the sum of those two digits are rater * than 1 then store the carry avlue in the next digit.                          

*/
#include <bits/stdc++.h>
using namespace std;

void solve() { 
    
        string x,y;
        cin>>x>>y;
        string result = "";  //initialize the resultant string as null
        int sumOfdigit = 0;  //initialize the sum of the digit as zero 

        //traverse both of the strings from last digit to first digit
        int xz = x.size()-1 , yz = y.size()-1 ;
        while (xz >= 0 || yz >= 0 || sumOfdigit == 1) 
        { 
            sumOfdigit += ((xz >= 0)? x[xz] - '0': 0); 
            sumOfdigit += ((yz >= 0)? y[yz] - '0': 0); 
            result = char(sumOfdigit % 2 + '0') + result; //if current result if 1 or 0 then add it with the resultant string
            sumOfdigit /= 2;  //carry
            xz--; yz--;  //increase the digit number or move to the next digit
        } 
        cout<<result<<endl; //print the ans
    
}

int main() {
    int t;
    cin>>t;
    while(t-->0){
      solve();
    }
    return 0;
}

/*
   input - 
   2
   11 1
   1010 1011

  output -
  100
  10101
*/
