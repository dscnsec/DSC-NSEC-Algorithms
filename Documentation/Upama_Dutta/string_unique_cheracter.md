# unique cheracter

question can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/unique_char.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/chaltidutta/DSC-NSEC-Algorithms/blob/master/2.%20String/unique_char/Unique_Character_chalti.cpp">here </a><br>

the trick is so simple of this question.we will be taking a vector, which includes the character from
A to z and it's number of occurance.

<p align="center">
 vector<int> freq(256, 0);</p><br>
then we will start traversing from the first of the string, and put the number of occurence,like if 
the first no is a, then we will increase the no of occurence of a in that vector, then move to the next
character of the string and check it like before.

<p align="center">
for(int i = n-1 ; i >= 0 ; i--){
        freq[s[i]]++;
} </p><br>
after that we will start traversing again and check if the value of any occurence is one or not, if it it then 
return its possition and break, if not then return -1.

<p align="center">
for(int i = 0 ; i < n ; i++){
        if(freq[s[i]] == 1)
            return i;
    }
    return -1; </p><br>

Time complexity : O(n)
Space complexity :- O(n)