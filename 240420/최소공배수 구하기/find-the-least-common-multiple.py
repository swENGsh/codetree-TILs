def lcm(n, m):
    maxv = max(n, m)
    while True:
        if maxv % n == maxv % m == 0:
            return maxv
        maxv += 1

n, m = map(int, input().split())
print(lcm(n, m))