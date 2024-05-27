def solve(lst1, n1, lst2, n2):
    for i in range(0, n1-n2+1):
        flag = False
        for j in range(0, n2):
            if lst1[i+j] != lst2[j]:
                flag = True
                break
        if flag: continue
        return True
    return False

n1, n2 = map(int, input().split())
n1s = list(map(int, input().split()))
n2s = list(map(int, input().split()))

if solve(n1s, n1, n2s, n2):
    print("Yes")
else :
    print("No")