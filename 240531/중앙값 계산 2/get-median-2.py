n = int(input())
arr = list(map(int, input().split()))
tmp = []
for i in range(len(arr)):
    if i%2==0:
        tmp = arr[:i+1]
        tmp.sort()
        print(tmp[i//2], end=" ")