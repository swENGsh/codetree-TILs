class Code:
    def __init__(self, code, point, time):
        self.code = code
        self.point = point
        self.time = time

code = Code("codetree", "L", 13)
print(f'secret code : {code.code}')
print(f'meeting point : {code.point}')
print(f'time : {code.time}')