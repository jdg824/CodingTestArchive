hour, min = map(int, input().split())

if min-45 < 0:
    hour -=1
    min = 60 - (45 - min)
    if hour<0:
        hour = 24 -1
else:
    min-=45

print(hour, min)
