def solve(n):
    if n == 0:
        return
    print(n, end=" ")
    solve(n-1)
    print(n, end=" ")

n = int(input())
solve(n)