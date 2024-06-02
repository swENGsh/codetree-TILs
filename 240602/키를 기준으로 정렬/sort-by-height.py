class Info:
    def __init__(self, name, h, w):
        self.name = name
        self.h = h
        self.w = w

n = int(input())
lst = []
for i in range(n):
    name, h, w = input().split()
    lst.append(Info(name, int(h), int(w)))

lst.sort(key=lambda x: x.h)
for i in range(n):
    ans = lst[i]
    print(ans.name, ans.h, ans.w)