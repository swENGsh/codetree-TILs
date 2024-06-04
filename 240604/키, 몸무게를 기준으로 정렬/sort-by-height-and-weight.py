class Info:
    def __init__(self, name, h, w):
        self.name = name
        self.h = h
        self.w = w

n = int(input())
infos = []
for i in range(n):
    name, h, w = input().split()
    infos.append(Info(name, int(h), int(w)))

infos.sort(key=lambda x: (x.h, -x.w))
for i in range(n):
    cur = infos[i]
    print(cur.name, cur.h, cur.w)