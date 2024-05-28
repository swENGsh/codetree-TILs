def solve(a, b):
    sumv = 0
    for i in range(a, b+1):
        sumv += arr[i-1]
    return sumv
n, m = map(int, input().split())
arr = list(map(int, input().split()))
for i in range(m):
    a, b = map(int, input().split())
    print(solve(a, b))