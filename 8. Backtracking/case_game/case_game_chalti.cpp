/**
 * --------------------------------------------------------------------------------------------------------------------------------------------------
 * @case_game_chalti.cpp
 * --------------------------------------------------------------------------------------------------------------------------------------------------
 * 
 * Description :-
 * first make a recursive tree for solving this problem, take the input and make a output array, initialize it with zero.
 * the recussive tree will be something like this-
 *  first go to the first element, if it is a char, then we have two choice, and then go to the second char, and their will be aslo two choice,
 * say for example, the string is a1b2-
 * first we will go for 'a' , here we have two choice, 'a' and 'A', after that we have a digit so we will include the int with the both 
 * choice, so it will be a1 and A1, then we will go for the third element, the third one is b, the we have againg two choice, 'b' and 'B', after that
 * we have again a digit, so the digit will be included with the char, and it will be, 'b2' and 'B2' . now we will jump one step backword to the 
 * tree, where, i lefted 1b2, now we have again four choice, a1b2, A1b2, a1b2, a1B2, now we will again jump one step backword to the recursive tree,
 * here we have nothing left, so the ans will be a1b2, A1b2,a1b2,a1B2
 * 
 * --------------------------------------------------------------------------------------------------------------------------------------------------
 * time complexity;- O(n) , space complexity:-O(n)
 *  @author[chaltidutta](https://github.com/chaltidutta)
 * --------------------------------------------------------------------------------------------------------------------------------------------------
 * **/

#include <bits/stdc++.h>
using namespace std;

   void backtrack(string &S, vector<string>&v, int start ){
        if(start==S.size()){
           v.push_back(S);
            return;
        }
          backtrack(S,v,start+1); //backtrack
          if(isalpha(S[start])){
              S[start] ^=(1<<5);
              backtrack(S,v,start+1); //backtrack
          }
        
           
    }
    void solve(){
        int n;
        cin>>n; //n is the size of the string
        string S;
        cin>>S;
        vector<string> v;
        backtrack(S,v,0);
        for(int i =0; i<v.size(); i++){
            cout<<v[i]<<endl;
        }
    }
    int main(){
        int t;
        cin>>t;
        while(t-->0){
            solve();
        }
        return 0;
    }

    /**
     * input :-
     * 
     * 
     * 1
     * 4
     * a1b2
     * output :-
     * 
     * 
     * a1b2
     * a1B2
     * A1B2
     * A1b2
     * **/