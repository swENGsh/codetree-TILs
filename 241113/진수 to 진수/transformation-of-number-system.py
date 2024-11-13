def to_binary(n, b):
    binary = []
    while n > 0:
        if n < b:
            binary.append(n)
            binary.reverse()
            return binary
        binary.append(n%b)
        n //= b
    return [0]

def to_num(n, b):
    num = 0
    for i in range(len(n)):
        num += n[i] * b**i
    return num

a, b = map(int, input().split())
n = list(map(int, input()))
n.reverse()
ans = to_num(n, a)
ans = to_binary(ans, b)
print(''.join(map(str, ans)))