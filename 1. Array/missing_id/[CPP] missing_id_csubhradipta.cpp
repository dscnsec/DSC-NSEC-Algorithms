/*
 * @file [CPP] missing_id_csubhradipta.cpp 
 * @Find the stack number of missing ID
 * @details 
 * If the missing id is greater than 2, then SET stack number = ceil((missing ID - 2)/stack size) + 1
 * Else SET stack number = 1
 * Space Complexity : O(1)
 * Time Complexity : O(1)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int missingID;
	float stackSize;
	cin >> missingID >> stackSize;
	int stackNo = 1;
	if ( missingID > 2)
		stackNo += ceil((missingID-2) / stackSize);
	cout<<stackNo<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}