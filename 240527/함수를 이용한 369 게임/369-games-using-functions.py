def solve1(n):
    while n > 0:
        if n%10 == 3 or n%10 == 6 or n%10 == 9:
            return True
        else:
            n //= 10
    return False

def solve2(n):
    if n%3: return False
    return True

a, b = map(int, input().split())
cnt = 0
for i in range(a, b+1):
    if solve1(i):
        cnt += 1
        continue;
    if solve2(i):
        cnt += 1

print(cnt)