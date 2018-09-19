# 148A - Insomnia Cure
[Link](http://codeforces.com/contest/148/submission/43078956)  
For this problem, first check if any of the number in k,l,m,n is one if it is one then count is equal to d 
else check from 1 to d using a for loop. 
If the current number mod by k or l or m or n is zero then add the counter.

Worst Case: O(n).
Average Case: θ(n).
Best Case: Ω(1).

# 469A - I Wanna Be the Guy
[Link](http://codeforces.com/contest/469/submission/43079154)
For this problem, put all the number for X and Y in arrays.
Next, I prepare a counter start with 0.
Then I check from 1 to n with a for loop.

Inside the loop I run another for loop to check if whether X's array has the number of the current level.
If he has it the counter to check completed level is added by 1 and I set the comp variable that means the search is complete,
so it did not has to run a second for loop to check in Y's array.
```
bool comp = false;
for(int indexP=0; indexP<p ; ++indexP){
	if(pLev[indexP] == i){
		++theGuy;
		comp = true;
		indexP = p;
	}
}
if(!comp){
	for(int indexQ=0; indexQ<q ; ++indexQ){
		if(qLev[indexQ] == i){
			++theGuy;
			indexQ = q;
		}
	}
}
```
Last, check if the counter of the completed level is the same as the levels available.
```
if(theGuy == n)
```

Worst Case: O(n^2).
Average Case: θ(nxm).
Best Case: Ω(nxm).

# 492B - Vanya and Lanterns
[Link](http://codeforces.com/contest/492/submission/43078048)  
For this problem, the first step is to sort the lamps array. I sort it using merge sort.
Next, prepare a variable to save the highest radius value. 
To set the first radius value, check if the length of the street subtracted by last value of the array is bigger than the first value of the array substracted by 0.
If it is true then the first radius value is the length of the street subtracted by last value of the array.
else if it is the opposite then the first radius value is the first value of the array substracted by 0.

Next, run a for loop to check between the lamps if there is a bigger radius value.
```
if(((lamp[i] - lamp[i-1])/2) > rad)
```
it is divided by 2 because it is enough for each lamp to light half the distance to the lamp after it if we want to light the whole street.

Worst Case: O(n log n).
Average Case: θ(n log n).
Best Case: Ω(n log n).
