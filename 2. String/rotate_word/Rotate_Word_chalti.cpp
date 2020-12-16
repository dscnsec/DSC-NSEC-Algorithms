/**
 * Rotate_Word_chalti.cpp
 * -----------------------------------------------------------------------------------------------------------------
 * Description :- 
 * -----------------------------------------------------------------------------------------------------------------
 * In the question, it asks to find if we put the element of the both string on the clockwork, then
 * the both string will  be same. 
 * for solving this problem, first of all we will check if the both string's size same or not, if same, then we will * * * procced for next but if they are not same at that possition we will decleare it as "NO" 
 * as next process we will check, if all of the cheracture of both of the srrings are same or not,if same then we will go for next checking, 
 * then we will check the charecture in acyclick order, if they are same, it will print YES otherwise NO.
 * -----------------------------------------------------------------------------------------------------------------
 * 
 * Time Complexity - O(n)  Space Complexity-O(1)
 * 
 * -----------------------------------------------------------------------------------------------------------------
 * 
 * @author [chaltidutta](https://github.com/chaltidutta)
 * 
 * -----------------------------------------------------------------------------------------------------------------
 * **/

#include <bits/stdc++.h>
using namespace std;

//this is boolean function which will indicate if the string is rotate word or not, if it is then it will 
//return true, otherwise false
bool rotateString(string A, string B) {
        int n=A.size(), m=B.size();
        if(A=="" && B=="")
            return true;
        if(n!=m)
            return false;
        
        int k=n;
        while(k-->0) {
            if(A==B)
                return true;
            char c=A[0];
            A= A.substr(1)+c;
        }
        return false;
}


//here we will take input of the string, and check if the previous rotateString 
//returns true of false, if true the we will print YES otherwise NO.
void solve(){
    string A,B;
    cin>>A>>B;
    if(rotateString(A,B)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}

/***
 * --------------------------------------------------------------------------------------------------------
 * input :-
 * 2
 * amazon azonam
 * amazon onamaz
 * 
 * output :-
 * YES
 * YES
 * ----------------------------------------------------------------------------------------------------------
 * 
*/
