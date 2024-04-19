def gcd(n, m):
    minv = min(n, m)
    while(True):
        if n % minv == m % minv == 0:
            return minv
        minv -= 1

n, m = map(int, input().split())
print(gcd(n, m))