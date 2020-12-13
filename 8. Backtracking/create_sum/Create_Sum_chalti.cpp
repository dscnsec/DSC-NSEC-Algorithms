/**
 * Create_sum_chalti.cpp
 * 
 * Algorithm :-
 * 
 * sort the array in a increasing order. then remove all the duplicates from the array and then use
 * recursion and backtracking to solve thw problem - 
 *      1. if at any time sub-problem sum equals to zero, then add that array to the result array to the result .
 *      2. else if sum is negative, then ignore that sub-problem.
 *      3. else insert the present array in that index to the current vector and call the function with sum = sum - A[index]
 *         and index = index, then pop that element from curr index (backtracking) and call the funtion with sum and index+1 .
 * Time Complexity :- O(n*sum)   Space Complexity :- O(n*number of possible combination)
 *  @author [chaltidutta](https://github.com/chaltidutta)
 * 
 * 
 * 
 * **/

#include<bits/stdc++.h>
using namespace std; 

void calSum(vector<int> A, int sum, vector<int> &temp, int index, vector<vector<int>> &res)
{
    //if sum equals to the target , abb it to set
    if(sum == 0)
    {
        res.push_back(temp);
        return;
    }
    

    //recursion for all remaining elements that have value similar of sum
    for(int i = index; i < A.size(); i++)
    {
        if(sum - A[i] >= 0)
        {
            temp.push_back(A[i]);
            sum = sum - A[i];
            
            //recursive call
            calSum(A, sum, temp, i, res);
            
            sum = sum + A[i];
            //remove number (backtracking)
            temp.pop_back();
        }
    }
}

vector<vector<int>> createSum(vector<int> &A, int sum) 
{
    //sort the inp array or vector
    sort(A.begin(), A.end());
    //remove duplicates
    A.erase(unique(A.begin(), A.end()), A.end());
    
    vector<vector<int>> res;
    vector<int> temp;
    
    calSum(A, sum, temp, 0, res);
    
    return res;
}

void solve(){

    int n;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int> A;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    vector<vector<int>> result;
    result=createSum(A,sum);
    //print all the combinations that are possible, which is stored in the result vector.
    for(int i=0 ; i<result.size() ; i++){
        for(int j=0 ; j<result[i].size() ; j++){
            cout<<result[i][j];
            if(j<result[i].size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
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
 * 2
 * 4 7
 * 2 3 6 7
 * 6 8
 * 2 3 6 4 8
 * 
 * output :- 
 * 2 2 3
 * 7
 * 2 2 2 2
 * 2 2 4
 * 2 3 3
 * 2 6
 * 4 4
 * 8

 * **/

