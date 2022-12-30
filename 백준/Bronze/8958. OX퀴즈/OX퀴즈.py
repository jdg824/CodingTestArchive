import sys
input = sys.stdin.readline

num = int(input())

for i in range(num):
    str = input()
    data = list(str)
    score = 1
    sum = 0
    for j in data:
        if(j == 'O'):
            sum += score
            score += 1
        else:
            score = 1
    print(sum)