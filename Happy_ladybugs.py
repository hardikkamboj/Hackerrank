test = int(input())

def check_nbhd(a):
    n = len(a)
    if n == 1:
        if a[0] == '_':
            return 'YES'
        else:
            return 'NO'
    for i in range(n):
        if a[i] == '_':
            break
        if i == 0 and a[0] != a[1]:
            return 'NO'
        elif i == n-1 and a[i] != a[i-1]:
            return 'NO'
        elif a[i-1] != a[i] and a[i+1] != a[i]:
            return 'NO'  

    return 'YES'    

for _ in range(test):
    n = int(input())
    a = list(input())
    flag = 0
    if '_' in a:
        a.sort()
    # print(a)
    print(check_nbhd(a))
    # print('')
