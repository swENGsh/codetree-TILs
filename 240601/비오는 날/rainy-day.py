class Info:
    def __init__(self, date, day, weather):
        self.date = date
        self.day = day
        self.weather = weather

n = int(input())
infos = []
for i in range(n):
    date, day, weather = input().split()
    infos.append(Info(date, day, weather))
infos.sort(key=lambda x: (x.weather, x.date))
ans = infos[0]
print(ans.date, ans.day, ans.weather)