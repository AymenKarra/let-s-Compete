n=int(input())
ch=""
while n>0:
    n=n//2
    ch=str(n%2)+ch
print(ch)

