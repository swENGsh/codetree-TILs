def solve(num):
    global n
    if num == 0:
        print()
        return
    print(n - num + 1, end=" ")
    solve(num-1)
    print(n - num + 1, end=" ")

n = int(input())
solve(n)