# Malfunctioning Keyword

 here what have to do, we have to check which character is not repeating, and we have to print the 
 chacacter alphabetically, which makes this question some difficult.
 So, to solve this problem, first I have taken an array of size 26, and innitialized as false.
 and check, if the next character os the string is same or not, if same then increase the iterator value by 
 two, 
 but if they are not same, then make the s[i]-a th value of the taken array as true. and
 at the last, print the i th value which make as true
 <br><br>
 <p align="center">
 <i>
 for(int i=0 ; i<n; ){<br>
        if(s[i] == s[i+1]){<br>
            i=i+2;<br>
        }else{<br>
            malfuntaion[s[i]-'a']=true;<br>
            i=i+1;<br>
        }<br>
    }<br>
 </i>
 </p><br><br>

 Time complexity : O(n)<br>
 Space complexity : O(n)