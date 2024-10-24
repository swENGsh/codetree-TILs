m1, d1, m2, d2 = map(int, input().split())
days = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']
days2 = [0,31,28,31,30,31,30,31,31,30,31,30,31]

d = 1 + d2 - d1
day = d 
for i in range(1, m2):
    day += days2[i]
for i in range(1, m1):
    day -= days2[i]

while day < 0:
    day += 7
print(days[(day)%7])