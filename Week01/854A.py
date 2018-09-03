from fractions import gcd

sum = input()
sum = int(sum)
div = sum/2
i = 1
gcdFlag = True
a = 0
b = 0

while gcdFlag:
    a = int(div-i)
    b = int(div+i)

    if (sum%2!=0) :
        a += 1

    if(gcd(a,b)<=1):
        gcdFlag = False
    else:
        i += 1

print(a," ",b)


