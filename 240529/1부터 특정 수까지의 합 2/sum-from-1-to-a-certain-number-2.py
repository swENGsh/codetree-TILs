def solve(sumv):
    if sumv == 1:
        return 1
    return solve(sumv-1) + sumv

n = int(input())
print(solve(n))