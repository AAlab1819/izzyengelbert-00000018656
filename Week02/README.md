I use quickSort for all the problem.

# 230A - Dragons
[Link](http://codeforces.com/contest/230/submission/42761998)  
I create two arrays for the dragon's strength and the bonus.
```
quickSort(dragonStrength, dragonBonus, 0, n-1);
```
Then, using quick sort i sort the dragon's strength
Inside the quickSort add a bit of change to also swap the dragon bonus when the strength is swaped, 
since it is a bit complicated in C++ to pass a multidimensional array.
After the strengths is sorted, I simply loop through the dragons and check whether Kirito-kun can defeat the dragon.
If Kirito-kun can defeat the dragon, then his strength is added with the dragon's bonus.
Else Kirito-kun cannot defeat all the dragon.
```
if(strength>dragonStrength[i]){
        strength += dragonBonus[i];
    }else{
        able = false;
        break;
    }
```
# 291A - Spyke Talks
[Link](http://codeforces.com/contest/291/submission/42763149)
In this problem, I first sort all the numbers.
After that, I prepare three variable current, connect, counter. 
Current means the current value that is being counted since number with the same value will be in sequence.
Connect means how many current value is in sequence.
When the loop is running first I check whether the current value is the same as the previous value that is saved in the current variable.
Also I check whether the current value is zero because zero is not counted.
If it is connect is added by 1. 
Then if it is more than 3 the counter is -1 and the loop will break,
Else if it is  the counter is added by 1.
```
++connect;
if(connect>=3){
	counter = -1;
	break;
}else if(connect == 2){
	++counter;
}
```
Else I change the current value to the new current value and connect is reset to 1.
```
current = array[i];
connect = 1;
```

# 768A - Oath of the Night's Watch
[Link](http://codeforces.com/contest/768/submission/42764941)  
For this problem, I do not use any sort.
I created a low and high variable.
While the user is entering input, If it is the first input then low and high is set to this value.
Else if the value is lower than the low then low is changed to the inserted value. The same goes with high.
```
cin>>number;
array[i] = number;
if(i==0){
	low = number;
	high = number;
}else if(low>number){
	low = number;
}else if(high<number){
	high = number;
}
```
After user inputs, I run a for loop to count how many value is lower than high and higher than low.
```
if(array[i]>low && array[i] < high){
	++counter;
}
```

