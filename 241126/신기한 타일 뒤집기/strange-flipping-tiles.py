n = int(input())
arr = [''] * 200001
now = 100000
for _ in range(n):
    x, d = input().split()
    if d == 'L':
        for i in range(now, now-int(x), -1):
            arr[i] = 'W'
        now -= int(x) - 1
    elif d == 'R':
        for i in range(now, now+int(x)):
            arr[i] = 'B'
        now += int(x) - 1
cnt_w = cnt_b = 0
for c in arr:
    if c == 'W':
        cnt_w += 1
    elif c == 'B':
        cnt_b += 1
#print(arr.count('W'), arr.count('B'))
print(cnt_w, cnt_b)