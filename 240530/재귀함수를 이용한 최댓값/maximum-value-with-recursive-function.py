def solve(n):
    if n == 1:
        return arr[0]
    else:
        return max(arr[n - 1], solve(n - 1))

n = int(input())
arr = list(map(int, input().split()))
print(solve(n))