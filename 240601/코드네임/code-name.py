class Info:
    def __init__(self, grade, score):
        self.grade = grade
        self.score = score

infos = []
for i in range(5):
    grade, score = input().split()
    infos.append(Info(grade, int(score)))

temp = Info('', 101)
for info in infos:
    if temp.score > info.score:
        temp.grade = info.grade
        temp.score = info.score
print(temp.grade, temp.score)