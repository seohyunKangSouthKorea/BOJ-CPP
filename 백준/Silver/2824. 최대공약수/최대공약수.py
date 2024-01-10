n=int(input())
a=1
b=1

tmp = list(map(int, input().split()))
for j in tmp:
    a*=j
    
m=int(input())

tmp = list(map(int, input().split()))
for j in tmp:
    b*=j

while(b!=0):
    tmp = a
    a = b
    b = tmp%b
    
s = str(a)
if len(s) > 9:
    for i in range(len(s)-9,len(s)):
        print(s[i],end='')
else:            
    print(a)
