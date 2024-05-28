def solve():
    for i in range(len(inp)-len(oup)+1):
        if (inp[i:i+len(oup)] == oup):
            return i
    return -1

inp = input()
oup = input()
ans = solve()
print(ans)