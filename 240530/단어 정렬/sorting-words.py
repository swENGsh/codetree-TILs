n = int(input())
arr = []
for i in range(n):
    _str = input()
    arr.append(_str)
arr.sort()
for s in arr:
    print(s)