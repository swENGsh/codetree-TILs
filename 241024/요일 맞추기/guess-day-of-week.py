m1, d1, m2, d2 = map(int, input().split())
days = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']
days2 = [0,31,28,31,30,31,30,31,31,30,31,30,31]

d = d2 - d1
day = d 
for i in range(m1+1, m2+1):
    day += days2[i]

if day < 0:
    day += 1
print(days[(day)%7])