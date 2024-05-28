def solve(string):
    lst = set(list(string))
    if (len(lst) >= 2):
        return True
    return False

a = input()
if solve(a):
    print("Yes")
else:
    print("No")