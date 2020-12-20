/*
 * @file: [CPP]destroy_asteroid_csubhradipta.cpp 
 * @brief: Find the state of the asteroids after all collisions
 * @details: 
 * Compare the (top) and (top - 1) element
 * If they moved towards each other, the larger one will be kept and smaller one will be popped
 * Again, if both are of same size and moving towards each other, both will be popped
 * Else both will be kept
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector<int> asteroid(n);
    stack<int> s;
    
    for(int i = 0; i < n; i++){
        cin>>asteroid[i];
    }
    
    int ast;
    
    for(int i = 0; i < n; i++){
        
        ast = asteroid[i];
        
        if(ast >= 0)
            s.push(ast);            //moving right
            
        else {                      //moving left
        
            if((s.size() == 0) || s.top() < 0)
                s.push(ast);                        //push, as previous also moving left
                
            else if(abs(s.top()) == abs(ast))       //both equal in size, hence destroyed
                s.pop();
            
            else if (abs(s.top()) < abs(ast)){      //previous is smaller, hence destroy previous
                s.pop();
                i--;                                //check this with previous stack element.
            }
        }
    }

    vector<int> result;
    
    while(!s.empty()){
        result.push_back(s.top());
        s.pop();
    }
    
    reverse(result.begin(), result.end());
    
    for(int i = 0; i < result.size(); i++)
        cout<<result[i]<<" ";
    cout<<endl;    
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        solve();
    } 
    return 0; 
} 
