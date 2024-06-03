class Info:
    def __init__(self, name, h, w):
        self.name = name
        self.h = h
        self.w = w

infos = []
for i in range(1, 6):
    name, h, w = input().split()
    infos.append(Info(name, int(h), float(w)))

print('name')
infos.sort(key=lambda x: x.name)

for i in range(5):
    cur = infos[i]
    print(cur.name, cur.h, cur.w)

print()
print('height')
infos.sort(key=lambda x: -x.h)

for i in range(5):
    cur = infos[i]
    print(cur.name, cur.h, cur.w)