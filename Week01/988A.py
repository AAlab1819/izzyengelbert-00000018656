n,k = input().split()
n = int(n)
k = int(k)
a = list(map(int, input().split()[:n]))
team = list()
current = a[0]
team.append(1)
for i in range(1,len(a)):
    if (current != a[i]):
        team.append(i+1)

if (len(team)>=k):
    print("YES")
    for x in team:
        print(x, end = ' ')
else:
    print("NO")



