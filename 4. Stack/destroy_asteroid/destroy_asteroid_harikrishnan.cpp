/**
 * @file destroy_asteroid_harikrishnan.cpp
 * @brief Given the size and the direction of the asteroids.
 *
 * Description- Every character that cannot be paired with a same letter to its 
 *   left or right neighbours as itself would be functioning correctly.
 * The only case where we need to analyse is when a positive asteroid from left
 * side approaches a negative asteroid from the right side(In other cases, they dont collide).
 * 
 *
 * Time Complexity - O(n) Space Complexity - O(n)
 * Auxillary space needed - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 */

#include<bits/stdc++.h>
using namespace std;

//Recursive function to print the elements of a stack from bottom to top.
void print_asteroids(stack<int> st)
{
    if(st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();
    print_asteroids(st);
    cout<<temp<<" ";
    return;
}


void solve()
{
        int n,temp;
        cin>>n;
        vector<int> ast;
        // Store the asteroids in the 'ast' vector
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            ast.push_back(temp);
        }
        
        stack<int> st;  
        // Traverse the asteroids from the beginning to end
        for(int i = 0;i<ast.size();i++)
        {  
            // A positive asteroid can just be pushed into the stack as it cannot collide
            // with previous asteroid regardless of previous one's direction. 
            if(ast[i] > 0) 
            { 
                st.push(ast[i]); 
            }  
            else // A left-directioned asteroid
            {
                // no collision occurs, if the previous asteroid is moving to left
                if(st.empty() || st.top() < 0) 
                { 
                    st.push(ast[i]);
                } 
                
                // collision occurs, if the previous asteroid is moving right
                else
                {   
                    while(st.top() > 0 and st.empty() == false)
                    {
                        if( st.top() > abs(ast[i])) 
                        { 
                            break;  // previous asteroid stands and the new one collides
                        }
                        
                        else if(st.top() == abs(ast[i])) 
                        { 
                            st.pop();  //both are of same size, so both collides
                            break;
                        }
                        
                        else   
                        {
                            st.pop(); // the new asteroid stands and previous one collides
                        // Does not break, as we have to consider the new not collided asteroid
                        }
                        
            // If the stack is empty(means no more asteroid to consider)  OR
            // If the asteroid to be considered is moving towards left(no collision occurs)
                        if(st.empty() == true or  (st.top() < 0))         
                        { 
                            st.push(ast[i]); 
                            break;
                        } 
            //Else continue the loop as the new asteroid can again collide with the previous ones.
                    }
                }
            }
        }
        //Now the stack contains the asteroids that has not been collided
        
        //To print the elements in the stack from bottom to top
        print_asteroids(st);

        cout<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*

SAMPLE INPUT

4
3
5 10 -5
2
8 -8
3
10 2 -5
4
-5 -1 1 5

SAMPLE OUTPUT

5 10

10
-5 -1 1 5

*/
