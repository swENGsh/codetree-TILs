def solve(m, d):
    if m <= 7:
        if m == 2 and d <= 28:
            if m % 2 == 0 and d <= 30:
                return True
            return True
        if m % 2 and d <= 31:
            return True
    elif m <= 12:
        if m % 2 == 0 and d <= 31:
            return True
        if m % 2 and d <= 30:
            return True
        
    return False

m, d = map(int, input().split())
if solve(m, d):
    print("Yes")
else : print("No")