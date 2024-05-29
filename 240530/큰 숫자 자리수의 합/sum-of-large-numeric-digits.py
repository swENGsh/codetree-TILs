def solve(n):
    if n < 10:
        return n
    return n % 10 + solve(n//10)

a, b, c = map(int, input().split())
print(solve(a*b*c))