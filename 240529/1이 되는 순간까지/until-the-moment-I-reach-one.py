def solve(n, cnt):
    if n == 1:
        return cnt
    if n%2:
        return solve(n//3, cnt + 1)
    else:
        return solve(n//2, cnt + 1)
n = int(input())
print(solve(n, 0))