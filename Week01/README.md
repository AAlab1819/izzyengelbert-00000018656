# 912A - Tricky Alchemy
The problem is to count how many more crystals is needed.
To solve this, we calculate the total of required crystals to the balls.
reqYellowCrystal = 2*x + y
reqBlueCrystal = y + 3*z

After that, we can just reduce the total of required crystals with the number of Grisha's crystals, then sum the remaining
output = (reqYellowCrystal-A) + (reqBlueCrystal-B)

# 854A - Fraction
In this problem, to determine maximum possible proper irreducible fraction,
we simply divide the sum by 2
div = sum/2

since there is a possibility that the two number has a gcd(Greatest Common Divisor) greater than 1,
I put the code in a while loop with loop condition as long as the gcd is greater than 1.
Also, as long as the loop goes on the reduced number for denumerator and numerator is increased by 1 starting with 1.
while gcdFlag:
	...
	if(gcd(a,b)<=1):
        gcdFlag = False
    else:
        i += 1
		
then for the division result, add 1 to numerator and subtract 1 from denumerator

a = int(div-i)
b = int(div+i)

then if the sum is an odd number then add 1 to numerator
if (sum%2!=0) :
        a += 1


# 988A - Diverse Team




