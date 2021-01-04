/**
 * @file Case Game
 * @brief In this program we have to print all combinations of string formed after transforming every character to lowercase and uppercase case
 * @Aprroach
   The inputed string is converted to a vector and passed on the function checks if the index stores an alphabet or number and executes accordingly.
   if it stores an alphabet the function changes case and recursively calls the function itself.
   same goes for a number except for changing the case.
 * @details
 * Time complexity O(2^n) and Space Complexity O(n)
 * Your crewmates are busy doing tasks and at the moment you have none. To keep yourself busy, you invented
   a new game for yourself. You take an alphanumeric string and transform every letter individually to be lowercase
   or uppercase to create another string. Find out all the possible string created in the above manner
 * Input :
   The first line of the input contains a single integer T denoting the number of test cases T. T test cases follow
   The first line of each test case contains a single integer N
   The next line contains an alphanumeric string S
 * Output :
   For each test case, print all combinations of string formed after transforming every character to lowercase and uppercase case.
 * Sample input :
   1
   4
   a1b2
 * Sample Output :
   a1b2
   A1b2
   a1B2
   A1B2
 * @author [Sayantan Bose](https://github.com/sayantan1413)
 */
#include <bits/stdc++.h>
using namespace std;
void check(vector <char> s, int p, int n)
{
    /* prints the string on reaching the end */
    if(p == n)
    {
        for(auto i : s)
        cout<<i;

        cout<<endl;
        return;
    }

    /* checks if it is a number or not */
    if (s[p] >= '0' && s[p] <= '9')
    {
        check(s, p + 1, n);
        return;
    }

    /* changing the cases  */

    s[p] = tolower(s[p]);
    check(s, p + 1, n);

    s[p] = toupper(s[p]);
    check(s, p + 1, n);
}

void solve() {
  //write your code here
  string str;
  int n;
  cin>> n;
    cin>>str;
    vector <char> s(str.begin(),str.end());
  check(s,0,n);
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
