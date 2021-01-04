/**
 * @file create_sum_harikrishnan.cpp
 * @brief Given an array of integers and a target variable X, where we have to find a  
 * list of all unique combinations of the N integers where the chosen numbers sum to X.
 *
 * Description - 
 *  We sort the given array in increasing order, and then call the recursive backtracking function.
 * Starting from the first index of the array we check if all possible combinations, where each element is allowed to appear more than once. While checking each combination we also store those elements in a vector so that if we achieve the resultant sum, then we can print the elements.
 * When a combination fails to achieve a sum of X, we remove an element from the vector, and adds another element to the combination and checks the condition.
 *
 *  Each time we add subtract an element from the 'X' value 
 * Time Complexity - O(n*sum) Space Complexity - O(n)
 * @author [Harikrishnan6336](https://github.com/Harikrishnan6336)
 **/

#include<bits/stdc++.h>
using namespace std;


void createSum(vector<int>& arr,int X,int index, vector<int>& res)
{
    // If the sum of the combination present in 'res' is X, then print those elements.
    if(X == 0)
    {
        for(long unsigned int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
            cout<<endl;
            return;
    }
    
    // Traverse the given array
    for(long unsigned int i = index; i<arr.size(); i++)
    {
        // If the considered element is greater than the target X, it cannot be included in the combination.
        if(arr[i]>X)
        {
            break;
        }
        // Push the element to the combination
        res.push_back(arr[i]);
        // Recursively inspects if all the combinations involving the combination in 'res' could achieve a sum equal to X or not.
        createSum(arr,X-arr[i],i,res);
        // Remove the last element, since all the combinations with that sequence has been inspected. 
        res.pop_back();
    }           
}
 
void solve()
{
    int n,X,temp; // size of the array of integers
    cin>>n>>X; 
    if(n == 0)
    {
        return;
    }
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);    //Input the integers
    }
    vector<int>res;
    // Sort the numbers in increasing order.
    sort(arr.begin(), arr.end());
    // Below function backtrackingly finds all the possible combinations.
    createSum(arr,X,0, res); 
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

2
4 7
2 3 6 7
0 0


SAMPLE OUTPUT

2 2 3
7


*/
