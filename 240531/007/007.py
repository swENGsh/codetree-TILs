class Code:
    def __init__(self, code, point, time):
        self.code = code
        self.point = point
        self.time = time

code, point, time = input().split()
code = Code(code, point, int(time))
print(f'secret code : {code.code}')
print(f'meeting point : {code.point}')
print(f'time : {code.time}')