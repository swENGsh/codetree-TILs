class Info:
    def __init__(self, name, ko, en, ma):
        self.name = name
        self.ko = ko
        self.en = en
        self.ma = ma

n = int(input())
lst = []
for i in range(n):
    name, ko, en, ma = input().split()
    lst.append(Info(name, int(ko), int(en), int(ma)))

lst.sort(key=lambda x: (x.ko, x.en, x.ma), reverse=True)
for i in range(n):
    ans = lst[i]
    print(ans.name, ans.ko, ans.en, ans.ma)