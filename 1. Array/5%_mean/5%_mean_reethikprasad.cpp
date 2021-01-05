/*
 * Description
 * 5%_mean_reethikprasad.cpp
 * We have to find the  the mean of the  intgers after removing the smallest 
 * 5% and largest 5% of the elements.
* First take the number of test cases "t"
 * Then take the number as an array input with size n
 * Store them in an array a[n]
 * Now using the STL sort them in increasing order i.e sort(a,a+n)
 * After sorting we remove the smallest and the largest 5% array
 * Store the remaining in total left
 * Find the mean and print out
 * time complexity :- O(nlogn)  space complexity :- O(1)
 * @author [reethikprasad](https://github.com/reethikprasad)
 * 
 * **/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int five=(n*5)/100;
    float sum=0,mean;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(i>=five && i<(n-five))
        sum=sum+a[i];
    int totalleft=n-2*five;
    mean=sum/(totalleft);
    cout<<fixed;
    cout<<setprecision(5)<<mean<<endl;
    }
    return 0;
}


/*
 Input

2 <br/>
20 <br/>
6 2 7 5 1 2 0 3 10 2 5 0 5 5 0 8 7 6 8 0 <br/>
40 <br/>
6 0 7 0 7 5 7 8 3 4 0 7 8 1 6 8 1 1 2 4 8 1 9 5 4 3 8 5 10 8 6 6 1 0 6 10 8 2 3 4 <br/>

 Output

4.00000 <br/>
4.77778
/*