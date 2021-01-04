# Case Game

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/case_game.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/case_game/case_game_chalti.cpp">here </a><br>

first make a recursive tree for solving this problem, take the input and make a output array, initialize it with zero.
the recussive tree will be something like this- <br>
first go to the first element, if it is a char, then we have two choice, and then go to the second char, and their will be aslo two choice,
say for example, the string is a1b2-<br>
first we will go for 'a' , here we have two choice, 'a' and 'A', after that we have a digit so we will include the int with the both 
choice, so it will be a1 and A1, then we will go for the third element, the third one is b, the we have againg two choice, 'b' and 'B', after that<br>
we have again a digit, so the digit will be included with the char, and it will be, 'b2' and 'B2' . now we will jump one step backword to the 
tree, where, i lefted 1b2, now we have again four choice, a1b2, A1b2, a1b2, a1B2, now we will again jump one step backword to the recursive tree,<br>
here we have nothing left, so the ans will be a1b2, A1b2,a1b2,a1B2
<br><br>
<p align="center"><i>
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
</i><p><br><br>

time complexity;- O(n) <br>
space complexity:-O(n)