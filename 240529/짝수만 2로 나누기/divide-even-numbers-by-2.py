def modify(n, arr):
    for i in range(n):
        if arr[i]%2 == 0:
            lst[i] //= 2

n = int(input())
lst = list(map(int, input().split()))
modify(n, lst)
print(*lst)