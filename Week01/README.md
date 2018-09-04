# 912A - Tricky Alchemy
[Link](http://codeforces.com/contest/912/submission/42449770)  
The problem is to count how many more crystals is needed.
To solve this, we calculate the total of required crystals to the balls.

```
reqYellow = 2*x + y
reqBlue = y + 3*z
```
Next, check whether the required is larger than the existing crystals.
If it is larger, reduce the required with the existing crystals then add it to the output


# 854A - Fraction
[Link](http://codeforces.com/contest/854/submission/42413236)  
In this problem, to determine maximum possible proper irreducible fraction,
we simply divide the sum by 2
```
div = sum/2
```
since there is a possibility that the two number has a gcd(Greatest Common Divisor) greater than 1,
I put the code in a while loop with loop condition as long as the gcd is greater than 1.
Also, as long as the loop goes on the reduced number for denumerator and numerator is increased by 1 starting with 1.
```
while gcdFlag:
	...
	if(gcd(a,b)<=1):
        gcdFlag = False
    else:
        i += 1
```	
then for the division result, add 1 to numerator and subtract 1 from denumerator
```
a = int(div-i)
b = int(div+i)
```
then if the sum is an odd number then add 1 to numerator
```
if (sum%2!=0) :
        a += 1
```

# 988A - Diverse Team
[Link](http://codeforces.com/contest/988/submission/42449381)  
For this problem, I created three array.
For the student, the team member, and the index.
I also created a counter to count how many different student that is already added to the team.

To add students to the team, I created a nested loop.
The first loop is to loop through all the student ratings.
In the first loop a also added an alike counter to indicate how many ratings are alike in the team.
The second loop is to check whether there is already a student with the same rating in the team or not.
When there is already a student with the same rating in the team, the alike counter is added by 1.
```
for(int j=0; j<k; ++j){
            if(team[j] == a[i]){
                ++alike;
            }
        }
```
After existing the second loop, I check how many student with the same rating as the current student are in the team.
If the alike counter is 0 then there is no student with the current student rating.
So I add this student to the team and add the counter by 1.
Since order doesn't matter I put the student to the team array with the counter as the index.
```
if(alike == 0){
	team[counter] = a[i];
	index[counter] = i;
	++counter;
}
```
After the loop is finished, I check the whether the counter is greater or the same as the required number of student for the team
if it is smaller then it is not possible to form a team.
```
if(counter>=k)
```
