# Missing Id

The problem asks us to find the stack number of the nth id.<br>

Now, the rules of stacking ids are:
- the first stack will have 2 ids
- all remaining stacks will have x ids

So now, we can easily predict the stack number if n<=2, ie 1<br>
How do we predict the stack number of the remaining ids?<br>
Note that for any id n, the stack number will be the smallest k such kx>=(n-2)<br>
Hence our formula is<br>
k=1+(n-2)/x+(n-2)%x==0?0:1
