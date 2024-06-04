class Point:
    def __init__(self, x, y, idx):
        self.x = x
        self.y = y
        self.idx = idx
n = int(input())
points = []
for i in range(1, n+1):
    x, y = map(int, input().split())
    points.append(Point(x, y, i))

points.sort(key=lambda p: (abs(p.x)+abs(p.y)))

for i in range(n):
    print(points[i].idx)