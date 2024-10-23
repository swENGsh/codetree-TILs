a, b, c = map(int, input().split())
time = 0
d = h = m = 11
while True:
    if a < 11 or b < 11 or c < 11:
        print(-1)
        break
    if d == a and h == b and m == c:
        print(time)
        break
    time += 1
    m+=1
    if m == 60:
        h += 1
        m = 0
        if h == 24:
            d += 1
            h = 0