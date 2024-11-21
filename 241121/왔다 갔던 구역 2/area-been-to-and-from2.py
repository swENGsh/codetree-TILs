n = int(input())
arr = [0]*2001
now = 1000
for _ in range(n):
    x, d = input().split()
    if d == 'L':
        for i in range(now, now-int(x), -1):
            arr[i] += 1
        now -= int(x)
    elif d == 'R':
        for i in range(now, now + int(x)):
            arr[i] += 1
        now += int(x)

cnt = 0
for i in arr:
    if i >= 2:
        cnt += 1
print(cnt)