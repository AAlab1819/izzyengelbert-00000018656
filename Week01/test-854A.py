from fractions import gcd

def test(sum):
    flag = False
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

    if(gcd(a,b)>1):
        flag = True

    return flag

number = list()

for i in range(3,1001):
    if (test(i)):
        number.append(i)

print(number)


