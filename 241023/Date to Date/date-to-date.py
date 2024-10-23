m1, d1, m2, d2 = map(int, input().split())
days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
m = m1
d = d1
day = 1
while True:
    if m == m2 and d == d2:
        print(day)
        break
    d += 1
    day += 1
    if d == days[m]:
        m += 1
        d = 0