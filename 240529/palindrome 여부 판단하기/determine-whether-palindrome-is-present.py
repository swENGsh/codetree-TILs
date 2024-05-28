def modify(string):
    for i in range(len(string)//2+1):
        if string[i] != string[len(string)-i-1]:
            return False
    return True

_str = input()
if modify(_str):
    print("Yes")
else :
    print("No")