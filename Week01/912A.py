A, B = input().split()
A = int(A)
B = int(B)
x, y, z  = input().split()
x = int(x)
y = int(y)
z = int(z)
reqYellowCrystal = 2*x + y
reqBlueCrystal = y + 3*z
output = (reqYellowCrystal-A) + (reqBlueCrystal-B)
print (output)