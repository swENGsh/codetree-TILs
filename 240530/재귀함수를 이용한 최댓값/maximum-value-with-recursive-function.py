def solve(n):
    if n<1:
        return arr[n]
    if arr[n-1] > solve(n-2):
        return arr[n-1]
    else:
        return solve(n-2)

n = int(input())
arr = list(map(int, input().split()))
print(solve(n))