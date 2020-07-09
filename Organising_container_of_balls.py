q = int(input())

for _ in range(q):
    n = int(input())
    before = []
    after = []
    a = []
    for i in range(n):
        temp = [int(j) for j in input().split()]
        a.append(temp)
        before.append(sum(temp))
    for i in range(n):
        after.append(sum([row[i] for row in a]))
    # print(before)
    # print(after)
    # print()  
    before.sort()
    after.sort()  
    if before == after:
        print('Possible')
    else:
        print('Impossible')    

