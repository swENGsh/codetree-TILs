n = int(input())
arr = list(map(int, input().split()))
arr.sort()
lst = [[0] for _ in range(n+1)]
for i in range(n):
    lst[i].append(arr[i])
for i in range(n):
    lst[i].append(arr[n*2-i-1])
ans = 0
for i in range(n+1):
    ans = max(ans, sum(lst[i]))
print(ans)