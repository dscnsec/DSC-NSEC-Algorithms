# Save Yourself

[Problem](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/save_yourself.md)  
[Source code](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/8.%20Backtracking/save_yourself/%5BCPP%5Dsave_yourself_csubhradipta.cpp)

## Explanation

Here, our task is to print all possible palindromic partitions of a given string.

We will divide the string in two parts- `first` and `rest`.
And the palindromic partitioned(space-separated) string will be stored to `curr` .

If the ``first`` is palindrome, it's appended to `curr` with a space `" "`, and again a call is made to the function (recursive) for checking partitions in `rest` string.

When the `rest` becomes empty, the `curr` string will be returned.   

And this is followed for rest of the possible substrings (i.e. i to n) of the given string.

```cpp
void subString( string str, string curr){
    
    if( str.size() == 0){
        cout<<curr<<endl;                   // space separated palidromic substring
        return;
    }
    for (int i = 0; i < str.size(); i++){
        string first = str.substr(0, i+1);              // First part
        string rest = str.substr(i+1, str.size());      // Rest part
        if(isPalindrome(first))
            subString(rest, curr + " " + first);        // recursive call
    }
}
```


## Space & Time complexities

Space Complexity:  O(n)
Auxiliary Space : &emsp; O(n)  
Time Complexity:  O(2<sup>n</sup>)