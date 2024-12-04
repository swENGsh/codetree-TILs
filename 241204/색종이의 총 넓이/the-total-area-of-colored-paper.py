def cal(info):
    x, y = info
    cnt = 0
    for i in range(x+100, x+108):
        for j in range(y+100, y+108):
            if area[i][j] == 0:
                area[i][j] = 1
                cnt += 1
    return cnt

n = int(input())
area = [[0]*201 for _ in range(201)]
sumv = 0
for _ in range(n):
    Info = list(map(int, input().split()))
    sumv += cal(Info)

print(sumv)