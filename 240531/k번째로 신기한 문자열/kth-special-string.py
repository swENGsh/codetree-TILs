n, k, T = input().split()
arr = []
for i in range(int(n)):
    arr.append(input())
arr.sort()
cnt = 0
for s in arr:
    if s[:len(T)] == T:
        cnt += 1
        if cnt == int(k):
            print(s)
            break