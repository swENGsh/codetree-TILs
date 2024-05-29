def solve(n):
    if n == 1 or n == 2:
        return 1
    return solve(n-2) + solve(n-1)

n = int(input())
print(solve(n))