def to_binary(n):
    binary = []
    while n > 0:
        if n == 1:
            binary.append(n)
            binary.reverse()
            return binary
        binary.append(n % 2)
        n //= 2


n = int(input())
ans = to_binary(n)

print(''.join(map(str, ans)))