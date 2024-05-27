def solve(y):
    if y % 4 : return False
    if y % 400 and y % 100 == 0 : return False
    return True

year = int(input())
if solve(year): print("true")
else : print("false")