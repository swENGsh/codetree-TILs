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
print(arr.count('W'), arr.count('B'))