def to_binary(num, b):
    binary = []
    while num > 0:
        if num < b:
            binary.append(num)
            binary.reverse()
            return binary
        binary.append(num % b)
        num //= b
    return [0]

n, b = map(int,input().split())
ans = to_binary(n, b)
print(''.join(map(str, ans)))