def solve(a, b):
    if a > b:
        return a+25, b*2
    elif a < b:
        return a*2, b+25

a, b = map(int, input().split())
a, b = solve(a, b)
print(a, b)