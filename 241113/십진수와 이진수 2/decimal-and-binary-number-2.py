def to_binary(n):
    binary = []
    while n > 0:
        if n == 1:
            binary.append(n)
            binary.reverse()
            return binary
        binary.append(n%2)
        n //= 2
    return [0]

def to_num(binary):
    num = 0
    for i in range(len(binary)):
        num += binary[i] * 2**i
    return num

binary = list(map(int, input()))
binary.reverse()
fst = to_num(binary)
ans = to_binary(fst*17)
print(''.join(map(str, ans)))