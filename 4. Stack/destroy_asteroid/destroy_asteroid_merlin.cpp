/**
 * destroy_asteroid_merlin.cpp
 * Final state of asteroids after all collisions have taken place
 *
 * Description-
 * All asteroids move at same speed, so collisions will happen only when asteroids from 2 different directions will collide
 * Now let us consider that everytime an asteroid moves from right to left, we add it to a stack
 * When we come across an asteroid which is coming the opposite direction, we check 2 things
 *  1. if the asteroid is smaller in size remove it, keep the one in hand
 *  2. if the asteroid if of same size remove both
 * Our final state will be the elements present in the stack
 *
 * Time Complexity-O(n) Space Complexity-O(n)
 *
 * @author [merlin](https://github.com/m-e-r-l-i-n)
 */

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    stack<int> s;

    for(i=0;i<n;i++)
    if(a[i]>0) s.push(a[i]);    //add sizes>0 to stack
    else
    {
        while(!s.empty() && s.top()>0 && s.top()<-a[i]) s.pop();    //all asteroids smaller in size coming from opposite direction should be removed
        if(s.empty() || s.top()<0) s.push(a[i]);
        else if(s.top()==-a[i]) s.pop();    //if 2 asteroids are of same size, remove both
    }

    n=s.size();
    int ans[n];
    for(i=n-1;i>=0;i--)     //iterating in reverse beacuse stack stores elements in LIFO manner
        ans[i]=s.top(),s.pop();
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
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
input-
5
3
5 10 -5
2
8 -8
3
10 2 -5
4
-5 -1 1 5
3
-5 -10 -5

output-
5 10

10
-5 -1 1 5
-5 -10 -5
*/
