n,w,h=map(int,input().split())
for i in range(n):
    t=int(input())
    if w**2+h**2>=t**2:print("DA")
    else:print("NE")
