n = int(input())
arr = [0]*201
for _ in range(n):
    a, b = map(int, input().split())
    for i in range(a+100, b+101):
        arr[i] += 1
maxv = max(arr)
print(maxv)