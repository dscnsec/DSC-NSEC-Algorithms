/*
 * @file: [CPP]malfunctioning_keyboard_csubhradipta.cpp 
 * @brief: Find keys that are not malfunctioning
 * @details: 
 * Traverse the string from end
 * If current character equals to next character , then skip one step 
 * Else append it to the result string
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str, result;
	cin>>str;
	for (int i = str.size() - 1; i >= 0; i--){
		if (str[i] == str[i-1])
			i--;                // skip one step
		else
			result += str[i];   // append the functioning key
	}
	cout<<result<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}