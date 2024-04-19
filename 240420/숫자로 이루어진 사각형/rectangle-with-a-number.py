def square(n, cur):
    for i in range(n):
        for j in range(n):
            print(cur%10, end = " ")
            cur += 1
            if cur % 10 == 0:
                cur += 1
        print()

n = int(input())
square(n, 1)