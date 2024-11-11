m1, d1, m2, d2 = map(int,input().split())
A = input()
days = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = {'Mon':0, 'Tue':1, 'Wed':2, 'Thu':3, 'Fri':4, 'Sat':5, 'Sun':6}
ans = 1
if m1 == m2:
    cnt = (d2 - d1)
else:
    cnt = ((days[m1] - d1) + d2)
for i in range(m1+1, m2):
    cnt += days[i]

ans += (cnt-week[A]) // 7
print(ans)