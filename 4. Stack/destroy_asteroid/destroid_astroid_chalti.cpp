/**
 * destroid_astroid(using_vestor)_chalti.cpp
 * 
 * description :-
 * 
 * Make an extra vector result, to store the resultant. take a for loop and traverse the whole
 * vector, and check, if result is empty, or last element is +ve but given vector[i] is -ve
 * then insert given vector[i] into the result vector and i increased by one,
 * otherwise, if the two element are same but their sign are opposite then  just increase the
 * i value with one.
 
 * 
 * Time complexity : O(n)
 * Space complexity : O(n)
 * 
 *  @author[chaltidutta](https://github.com/chaltidutta)
 * **/

#include<bits/stdc++.h>
using namespace std;

bool isNeg(int x){
      return x < 0;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    vector <int> result;
      for(int i = 0; i< n; ){
         //checking if the element is -ve or +ve, if it is, then push the bigger value into
         //the result vector
         if(result.empty() || !(!isNeg(result[result.size() - 1]) && isNeg(arr[i]))){ 
            result.push_back(arr[i]);
            i++;
         } else {
            int x = result[result.size() - 1];
            result.pop_back();
            int absX = abs(x); //if both of the value are same
            int absY = abs(arr[i]);
            if(absX == absY){
               i++;
            } else {
               if(absX > absY){
                  result.push_back(x);
                  i++;
               }
            }
         }
      }
      for(int i=0 ; i<result.size() ; i++){
          cout<<result[i]<<" ";
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

/*
Sample Input :-

4
3
5 10 -5
2
8 -8
3
10 2 -5
4
-5 -1 1 5

Sample Output :-

5 10

10
-5 -1 1 5
*/