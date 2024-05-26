def solve(n):
    if n%2 or (n+n//10)%5!=0: print("No")
    else: print("Yes")

n = int(input())
solve(n)