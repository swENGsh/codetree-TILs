def solve(n):
    for i in range(2, int(n**(1/2))+1):
        if n%i: continue
        else : return False
    return True

a, b = map(int, input().split())
sumv = 0
for i in range(a, b+1):
    if solve(i):
        sumv += i

print(sumv)