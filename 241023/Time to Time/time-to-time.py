a, b, c, d = map(int, input().split())
h = a
m = b
time = 0
while True:
    if h == c and m == d:
        print(time)
        break
    time += 1
    m += 1
    if m == 60:
        h += 1
        m = 0