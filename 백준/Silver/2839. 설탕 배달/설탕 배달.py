import sys

input = sys.stdin.readline

sug = int(input())
count = 0

while sug >= 0:
    if sug%5 == 0:
        count += (sug//5)
        break
    sug -= 3
    count +=1
else:
    count = -1

print(count)