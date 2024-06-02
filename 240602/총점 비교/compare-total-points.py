class Info:
    def __init__(self, name, a, b, c):
        self.name = name
        self.a = a
        self.b = b
        self.c = c

n = int(input())
lst = []
for i in range(n):
    name, a, b, c = input().split()
    lst.append(Info(name, int(a), int(b), int(c)))

lst.sort(key=lambda x : x.a + x.b + x.c)
for i in range(n):
    ans = lst[i]
    print(ans.name, ans.a, ans.b, ans.c)