def solve(a, o, c):
    if o == '+':
        return a + c
    if o == '-':
        return a - c
    if o == '/':
        return a//c
    if o == '*':
        return a*c

a, o, c = input().split()
a = int(a)
c = int(c)
print(f'{a} {o} {c} = {solve(a, o, c)}')