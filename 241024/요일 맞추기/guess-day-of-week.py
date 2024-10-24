m1, d1, m2, d2 = map(int, input().split())
days = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']
days2 = [0,31,28,31,30,31,30,31,31,30,31,30,31]

m = m2 - m1
d = d2 - d1
day = d + m*30
print(days[(1+day)%7])