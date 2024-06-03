class Info:
    def __init__(self, h, w, n):
        self.h = h
        self.w = w
        self.n = n

n = int(input())
students = []
for i in range(1, n+1):
    h, w = map(int, input().split())
    students.append(Info(h, w, i))

students.sort(key=lambda x: (-x.h, -x.w, x.n))

for i in range(n):
    cur = students[i]
    print(cur.h, cur.w, cur.n)