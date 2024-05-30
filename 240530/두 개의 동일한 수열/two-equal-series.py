n = int(input())
A = list(map(int,input().split()))
B = list(map(int,input().split()))
for i in A:
    if i not in B:
        print("No")
        break
else: print("Yes")