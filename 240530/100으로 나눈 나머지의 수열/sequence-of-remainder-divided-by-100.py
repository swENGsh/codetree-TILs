def solve(n):
    if n == 1:
        return 2
    if n == 2:
        return 4
    return (solve(n-2) * solve(n-1)) % 100
n = int(input())
print(solve(n))