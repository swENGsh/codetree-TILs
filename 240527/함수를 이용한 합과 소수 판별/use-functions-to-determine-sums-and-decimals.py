def solve1(n):
    for i in range(2, int(n**(1/2))+1):
        if n % i == 0 : return False
    return True

def solve2(n):
    sumv = 0
    while n > 0:
        sumv += n % 10
        n //= 10
    if sumv % 2 : return False
    return True

a, b = map(int, input().split())
cnt = 0
for i in range(a, b+1):
    if solve1(i) and solve2(i):
        cnt += 1
print(cnt)