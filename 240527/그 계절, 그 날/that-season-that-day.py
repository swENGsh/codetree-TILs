def year_check(y):
    if y % 4 : return False
    if y % 100 == 0 : return False
    if y % 100 == 0 and y % 400 : return False
    return True

def find_weather(m):
    if m <= 12:
        if m == 12:
            return "Winter"
        elif 9 <= m <= 11:
            return "Fall"
        elif 6 <= m <= 8:
            return "Summer"
        elif 3 <= m <= 5:
            return "Spring"
        elif 1 <= m <= 2:
            return "Winter"
    return -1

def solve(y, m, d):
    if m <= 7:
        if m == 2:
            if year_check(y):
                if d > 29: return -1
            else:
                if d > 28: return -1
        if m % 2 == 0 :
            if d > 30: return -1
        if m % 2 :
            if d > 31: return -1
    elif m <= 12:
        if m % 2 :
            if d > 30: return -1
        else:
            if d > 31: return -1
    return find_weather(m)


y, m, d = map(int, input().split())
print(solve(y, m, d))