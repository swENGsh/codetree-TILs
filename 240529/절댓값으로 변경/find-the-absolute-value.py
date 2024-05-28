def solve(n, arr):
    for i in range(n):
        if arr[i] < 0:
            lst[i] = -lst[i]

n = int(input())
lst = list(map(int, input().split()))
solve(n, lst)
print(*lst)