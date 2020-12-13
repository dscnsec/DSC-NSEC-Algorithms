/*
 * @file: [CPP] unique_char_csubhradipta.cpp 
 * @brief: Find first unique character from the string
 * @details: 
 * Check occurrence of each character in the string
 * If a character COUNT = 1, then SET flag = index of that particular character
 * and exit from the loop
 * Space Complexity : O(n)
 * Time Complexity : O(n^2)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int flag;
	for (int i = 0; i < n; i++){
		if (count(str.begin(), str.end(), str[i]) == 1){
			flag = i;
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