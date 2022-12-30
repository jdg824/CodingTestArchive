#리스트 반복문 이용할때 13번째줄
#리스트의 요소를 직접적으로 접근할 수 있음

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
