def solve(m):
    nm = m
    sumv = arr[m-1]
    while nm != 1:
        if nm % 2:
            nm -= 1
        else :
            nm //= 2
        sumv += arr[nm-1]
    return sumv
    sumv = 0


n, m = map(int, input().split())
arr = list(map(int, input().split()))
ans = solve(m)
print(ans)