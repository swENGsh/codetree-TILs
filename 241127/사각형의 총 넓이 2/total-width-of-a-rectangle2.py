n = int(input())
oblongs = [[0] * 201 for _ in range(201)]
now = 100
for k in range(1, n + 1):
    x1, y1, x2, y2 = map(int, input().split())

    for i in range(min(x1, x2) + now, max(x1, x2) + now):
        for j in range(min(y1, y2) + now, max(y1, y2) + now):
            oblongs[i][j] = 1

cnt = 0
for r in oblongs:
    cnt += sum(r)

print(cnt)