n = int(input())
arr = ['']*20
carr = [[0,0] for _ in range(20)]
now = 10
for _ in range(n):
    x, d = input().split()
    if d == 'L':
        for i in range(now, now-int(x), -1):
            if arr[i] == 'G':
                continue
            arr[i] = 'W'
            carr[i][0] += 1
            if carr[i][0] >= 2 and carr[i][1] >= 2 and arr[i] != 'G':
                arr[i] = 'G'
        now -= int(x) - 1
    elif d == 'R':
        for i in range(now, now+int(x)):
            if arr[i] == 'G':
                continue
            arr[i] = 'B'
            carr[i][1] += 1
            if carr[i][0] >= 2 and carr[i][1] >= 2 and arr[i] != 'G':
                arr[i] = 'G'
        now += int(x) - 1
print(arr.count('W'), arr.count('B'), arr.count('G'))