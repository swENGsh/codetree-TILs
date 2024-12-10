def find_s():
    global ansx1, ansy1
    for i in range(ay1 + 1000, ay2 + 1000+1):
        for j in range(ax1 + 1000, ax2 + 1000+1):
            if area[i][j] == 1:
                ansx1 = j
                ansy1 = i
                return
def find_e():
    global ansx2, ansy2
    for j in range(ax2 + 1000, ax1 + 1000 + 1, -1):
        for i in range(ay2 + 1000, ay1 + 1000 - 1, -1):
            if area[i][j] == 1:
                ansx2 = j
                ansy2 = i
                return
ax1, ay1, ax2, ay2 = map(int, input().split())
bx1, by1, bx2, by2 = map(int, input().split())

area = list([0]*2001 for _ in range(2001))
for i in range(ay1+1000, ay2+1000+1):
    for j in range(ax1+1000, ax2+1000+1):
        area[i][j] = 1

for i in range(by1+1000, by2+1000+1):
    for j in range(bx1+1000, bx2+1000+1):
        if area[i][j] == 1:
            area[i][j] = 0

ansx1 = ansx2 = ansy1 = ansy2 = 2000
find_s()
find_e()

ans = (ansx2 - ansx1) * (ansy2 - ansy1)

print(ans)