/*
 * @file: [CPP]destroy_asteroid_csubhradipta.cpp 
 * @brief: Find the state of the asteroids after all collisions
 * @details: 
 * Compare the (top) and (top - 1) element
 * This has been done with the help of another stack
 * If they moved towards each other, the larger one will be kept and smaller one will be popped
 * Again, if both are of same size and moving towards each other, both will be popped
 * Else both will be kept
 * Note: The input vector is being treated as stack
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector<int> input(n);
    stack<int> output;    
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }
        
    while(!input.empty()){
        if(output.empty()){
            output.push(input.back());		// push one element if stack is empty
            input.pop_back();			// pop that element from input vector
        }
        else{
            if ((output.top() < input.back()) && (abs(output.top()) != abs(input.back()))){
                output.pop();					// smaller asteroid popped
                output.push(input.back());		// larger one pushed	 
                input.pop_back();
            }
                
            else if (output.top() > input.back()){
                output.push(input.back());			// smaller asteroid pushed as both moving in same direction
                input.pop_back();
            }
                
            else if (abs(output.top()) == abs(input.back())){	 
                if (output.top() >= input.back()){				// moving in same direction
                    output.push(input.back());
                    input.pop_back();
           	    }
                else{
                    output.pop();					// moving towards each other and collides
                    input.pop_back();
                }
            }
        }
    }
        
    while(!output.empty()){
        cout<<output.top()<<" ";
        output.pop();
    }
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