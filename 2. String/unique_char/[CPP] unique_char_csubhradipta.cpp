/*
 * @file: [CPP] unique_char_csubhradipta.cpp 
 * @brief: Find first unique character from the string
 * @details: 
 * Check occurrence of each character in the string
 * Initialize flag = -1
 * If a character COUNT = 1, then SET flag = index of that particular character
 * Break out from the loop and print flag
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int flag = -1;     
	int count[26] = {0};
	for (int i = 0; i < n; i++){
		count[str[i] - 97]++;       // store frequency of each character in the string
	}
	
	for (int i = 0; i < n; i++){
		if(count[str[i] - 97] == 1){    // check for the unique character
		    flag = i;                   // store its index
		    break;
		}
	}
	cout<<flag<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
