n=int(input())
for i in range(n):
    for j in range(n):
        if j<=i:print('*',end='')
    print('')
for i in range(n-2,-1,-1):
    for j in range(n):
        if j<=i:print('*',end='')
    print('')
