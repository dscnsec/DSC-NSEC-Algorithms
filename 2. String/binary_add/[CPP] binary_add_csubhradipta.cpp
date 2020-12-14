/*
 * @file: [CPP] binary_add_csubhradipta.cpp 
 * @brief: Print the sum of two strings of binary numbers
 * @details: 
 * Reverse the strings and add 0's to the smallest number till size of both string becomes same
 * Compared each bits of strings and stored on a third string
 *      a[i]    |   b[i]    |   carry(now)  |   sum     |   carry(next)
 *--------------+-----------+---------------+-----------+---------------
 *      0       |   0       |       0       |   0       |       0
 *      0       |   0       |       1       |   1       |       0
 *      0       |   1       |       0       |   1       |       0
 *      0       |   1       |       1       |   0       |       1
 *      1       |   0       |       0       |   1       |       0
 *      1       |   0       |       1       |   0       |       1
 *      1       |   1       |       0       |   0       |       1
 *      1       |   1       |       1       |   1       |       1
 *----------------------------------------------------------------------
 * Space Complexity : O(n)
 * Time Complexity : O(n)
 * @author [Subhradipta Choudhury](https://github.com/csubhradipta)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b,sum;
	cin>>a>>b;
	reverse(a.begin(), a.end());       // reverse 1st string
	reverse(b.begin(), b.end());       // reverse 2nd string
	int aLen = a.size(), bLen = b.size();
	int diff = abs(aLen - bLen);
	char carry = '0';
	while(diff--)
		(a.size() < b.size() ? a : b) += '0';       // size of both strings become same
		
		
	for (int i = 0; i < a.size(); i++){                 
	    if( a[i] == '0'  &&  b[i] == '0'){      
	        if(carry == '0')                        
	            sum += '0';
	        else                                    
	            sum += '1';
	        carry = '0';
	    }
	    else if( (a[i] == '0'  &&  b[i] == '1') || (a[i] == '1'  &&  b[i] == '0')){
	        if(carry == '0'){                       
	            sum += '1';
	            carry = '0';
	        }
	        else {
	            sum += '0';
	            carry = '1';
	        }
	    }
	    else { 
	        if(carry == '0')
	            sum += '0';
	        else
	            sum += '1';
	        carry = '1';
	    }
	}
	
	if(carry == '1')
	    sum += '1';         // add the remaining bit 
	
	reverse(sum.begin(), sum.end());    //reverse the resulting string
	cout<<sum<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
