ax1, ay1, ax2, ay2 = map(int, input().split())
bx1, by1, bx2, by2 = map(int, input().split())
mx1, my1, mx2, my2 = map(int, input().split())

area = list([0]*2001 for _ in range(2001))
for i in range(ay1+1000, ay2+1000):
    for j in range(ax1+1000, ax2+1000):
        area[i][j] = 1

for i in range(by1+1000, by2+1000):
    for j in range(bx1+1000, bx2+1000):
        area[i][j] = 1

for i in range(my1+1000, my2+1000):
    for j in range(mx1+1000, mx2+1000):
        if area[i][j]:
            area[i][j] = 0

sumv = 0
for i in range(2001):
    sumv += sum(area[i])

print(sumv)