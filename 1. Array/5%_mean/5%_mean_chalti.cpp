/**
 * 
 * 5%_mean_chalti.cpp
 * -----------------------------------------------------------------------------------------------------------------------
 * Description :-
 * what we have to do, we have to find the  the mean of the remaining integers after removing the smallest 
 * 5% and largest 5% of the elements.
 * so, to solve that first we will sort the array, then we will find the 5% smallest and 5% largest number, and then
 * we will find the total(sum) of those numbers which lies between 5% largest and 5% smallest number, and also i have 
 * taken a count variable to count the total number of array element which lies between those.
 * after finding the sum and the number of elements i have printed the mean by dividing the sum and count.
 * -----------------------------------------------------------------------------------------------------------------------
 * 
 * time complexity :- O(nlogn)  space complexity :- O(1)
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * 
 * @author [chaltidutta](https://github.com/chaltidutta)
 * 
 * **/

#include<bits/stdc++.h>
using namespace std; 

void solve(){

    int n; //length of the array
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i]; //taking input for the array element
    }
    sort(arr,arr+n); //sorting the array by using c++ stl function
    double sum=0 , count = 0;  
    for(int i=n/20 ; i<n-(n/20) ; i++){ //counting the sum of array element, which are between 5% largest and smallest element
        sum=sum+arr[i];
        count++;  //the number element
    }
    cout<<sum/count<<endl; //ans, the mean value

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
input :-

2
20
6 2 7 5 1 2 0 3 10 2 5 0 5 5 0 8 7 6 8 0
40
6 0 7 0 7 5 7 8 3 4 0 7 8 1 6 8 1 1 2 4 8 1 9 5 4 3 8 5 10 8 6 6 1 0 6 10 8 2 3 4

output :-
4
4.77778
*/