def even_solve(n):
    if n == 2:
        return 2
    return even_solve(n-2) + n

def odd_solve(n):
    if n == 1:
        return 1
    return odd_solve(n-2) + n

n = int(input())
if n%2:
    print(odd_solve(n))
else:
    print(even_solve(n))