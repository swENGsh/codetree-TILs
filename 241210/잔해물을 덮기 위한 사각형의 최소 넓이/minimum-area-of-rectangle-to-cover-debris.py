def find_x():
    global ansx1, ansx2
    for i in range(ay1 + 1000, ay2 + 1000+1):
        for j in range(ax1 + 1000, ax2 + 1000+1):
            if area[i][j] == 1:
                ansx1 = min(j, ansx1)
                ansx2 = max(j, ansx2)
def find_y():
    global ansy1, ansy2
    for i in range(ay1 + 1000, ay2 + 1000+1):
        for j in range(ax1 + 1000, ax2 + 1000+1):
            if area[i][j] == 1:
                ansy1 = min(i, ansy1)
                ansy2 = max(i, ansy2)

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

ansx1 = ansy1 = 2000
ansx2 = ansy2 = -2000

if ax1 >= bx1 and ay1 >= by1 and ax2 <= bx2 and ay2 <= by2:
    ansx1 = ansy1 = ansx2 = ansy2 = 0
else:
    find_x()
    find_y()


ans = (ansx2 - ansx1) * (ansy2 - ansy1)

print(ans)