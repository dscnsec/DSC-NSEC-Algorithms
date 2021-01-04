/*
 * @file: [CPP]rotate_word_csubhradipta.cpp 
 * @brief: Rotate the second string to obtain the first string
 * @details: 
 * SET start = str1[0] and end = str1[str1.size() - 1]
 * Traverse the second string
 * If str2[i] == start and str2[i-1] == end, then SET pivot = i
 * ROTATE the string anti-clockwise at pivot
 * COMPARE the second string and first string
 * IF equal, then print YES, else NO
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str1, str2;
	cin>>str1>>str2;
	char start = str1[0], end = str1[str1.size() - 1];
	int pivot = -1;
	for (int i = 1; i < str2.size(); i++){
		if( str2[i] == start && str2[i-1] == end){		// Find the pivot
			pivot = i;
			break;
		}
	}

	if (pivot != -1){
    
	    rotate(str2.begin(), str2.begin() + pivot, str2.end());		// rotate the string anti-clockwise at pivot
        
		if (str2 == str1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	// print if strings are unequal after rotation
	}
	else
		cout<<"NO"<<endl;		// print if pivot not found
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}