class Info:
    def __init__(self, name, addr, city):
        self.name = name
        self.addr = addr
        self.city = city

n = int(input())
infos = []
for i in range(n):
    name, addr, city = input().split()
    infos.append(Info(name, addr, city))

sorted(infos, key=lambda info: info.name)
print(f'name {infos[-1].name}')
print(f'addr {infos[-1].addr}')
print(f'city {infos[-1].city}')