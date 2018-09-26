# 268B - Buttons
[Link](http://codeforces.com/contest/268/submission/43365472)  

The pattern here is :
```
where i = 1->n
n + 1(n-1) + 2(n-2) + ... + i(n-i)
```

In my code, I cut the addition to n/2
For even 'n', I set the middle limit to n/2. Because we can multiply half of the sequence with 2, 
but because the sequence does not include n which we will add last, so the sequence is in odd number.
For odd 'n', I set the middle limit to n-1/2. The opposite goes for odd 'n'

Then, I loop a counter from 1 to limit and in each loop I sum the i(n-i).
After the loop, I multiply the sum by 2. Then, if the 'n' is even I add the excluded number in the middle of the sequence which is n/2 * n/2.
Last, I add the sum with n.
```
for(int i=n-1 ; i>limit; --i){
	sum += count * i;
	++count;
}
sum *= 2;
if(even){
	sum += n/2 * n/2;
}
sum += n;
cout<<sum;

```
# 598D - Igor In The Museum
[Link](http://codeforces.com/contest/598/submission/43469494)

For this problem, first we prepare all the required arrays. 
For the char inputs, the visited cells input, and an area variable to divide all possible explorable area of the museum to different areas, and an output array with limit of 1000000.
After taking the inputs for cells size and positions. Run through the array of char with a nested loop for.
In the second for loop, we made a condition to simply skip a '*' char, because it is a wall.
If the condition is met, add area by 1 to indicate different areas and set output to 0.
Then, run a recursive function to count the picture and to mark a cell with the area number.
The first stopping condition for the recursive functions is if the current cell is outside the grid.
Second, is to check if the current cell is already marked with an area.
Third, is to check if the current cell is a '*' to count for pictures.
After all the condition checking the current cells is marked with the current area.
Then, the recursive function will run to all four direction to check the surrounding cells.

After exiting the recursive loop, the outputs array will store the outputs based on area as the index.

Then we can take the input for position and check that cell position area. Because each cell is already marked with an area.
Which will become the index for the output.
