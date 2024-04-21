def solve(n):
    sumv = 0
    for i in range(1, n+1):
        sumv += i
    return sumv//10
n = int(input())
print(solve(n))