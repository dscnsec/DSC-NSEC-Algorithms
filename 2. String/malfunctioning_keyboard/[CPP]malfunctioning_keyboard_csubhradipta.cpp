/*
 * @file: [CPP]malfunctioning_keyboard_csubhradipta.cpp 
 * @brief: Find keys that are not malfunctioning
 * @details: 
 * COUNT number of consecutive repeating characters
 * If COUNT is odd, then update count[str[i]-97] = 1
 * Print char(i+97) if count[i] = 1
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin>>str;
	int working[26] = {0};
	char check;
	int count;
	for (int i = 0;  i < str.size(); i++){
	    count = 0;
	    check = str[i];
	    count++;
	    while (str[i+1] == check){	//count consecutive repeating characters
	        count++;
	        i++;
	    }
	    if( str[i] != str[i+1]){
	        if(count%2==1)
	            working[check - 97] = 1;  	// update the counter array
	    }
	}
	
	for(int i = 0; i < 26; i++){
	    if(working[i] == 1)
	        cout<<char(i+97);	// print working keys
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
