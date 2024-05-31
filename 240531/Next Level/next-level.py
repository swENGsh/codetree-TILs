class Info:
    def __init__(self, userId="codetree", lv=10):
        self.userId = userId
        self.lv = lv

userId, lv = input().split()

user1 = Info()
user2 = Info(userId, lv)
print(f'user {user1.userId} lv {user1.lv}')
print(f'user {user2.userId} lv {user2.lv}')