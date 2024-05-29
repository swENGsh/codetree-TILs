def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)


def nlcm(num):
    num.sort()
    max_num = num[-1]
    temp = 1
    for i in range(len(num)):
        temp = (num[i] * temp) // (gcd(num[i], temp))
    return temp

a = int(input())
arr = list(map(int,input().split()))
print(nlcm(arr))