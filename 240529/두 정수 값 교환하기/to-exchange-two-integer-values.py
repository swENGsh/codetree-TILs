def change(a, b):
    global n, m
    n, m = b, a
n, m = map(int, input().split())
change(n, m)
print(n, m)