from copy import deepcopy
n = int(input())
arr = list(map(int,input().split()))
arr2 = deepcopy(arr)
arr.sort()
visited = [0] * n
for i,v in enumerate(arr2):
    for j,t in enumerate(arr):
        if v == t and visited[j] == 0:
            visited[j] = 1
            print(j+1, end=' ')
            break