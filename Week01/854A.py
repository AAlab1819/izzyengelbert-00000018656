sum = input()
div = sum/2
a = div-1
b = div+1
if (sum%2!=0) :
    a += 1
print(int(a)," ",int(b))