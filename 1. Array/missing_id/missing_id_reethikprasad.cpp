/**
 * missing_id_reethikprasad.cpp
 * To find out the stack number of the stolen id.
 
 * Description-

 * Let say the missing id is greater than 2, then perform the calculation
 * Else SET stack number = 1
 * Space Complexity : O(1)
 * Time Complexity : O(1)
 * @author [reethikprasad](https://github.com/reethikprasad)
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int id;
	float n;
	cin >> id >> n;
	int pos = 1;
	if ( id > 2)
		pos =pos + ceil((id-2) / n);
	cout<<pos<<endl;
	}
	return 0;
}

/*
 Input

4 
7 3 
1 5 
22 5 
987 13

 Output

3 
1 
5 
77

*/