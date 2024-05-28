def change(a, b):
    return b, a
n, m = map(int, input().split())
n, m = change(n, m)
print(n, m)