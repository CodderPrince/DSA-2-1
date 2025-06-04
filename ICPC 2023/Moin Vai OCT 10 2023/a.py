# prince

t = int(input())

while t > 0:
    n = int(input())
    count = 0
    i = 0
    while i < n:
        a, b = map(int, input().split())
        if a > b:
            count += 1
        i += 1

    print(count)

    t -= 1
