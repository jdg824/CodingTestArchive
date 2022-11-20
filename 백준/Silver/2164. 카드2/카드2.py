'''
프로그램 이름 : 카드덱에서 마지막에 남아있는 카드 무엇인지 확인하기
내용 : BaekJoon 2164, 카드2
보완 내용 :

'''

import sys
from collections import deque

input = sys.stdin.readline
num=int(input())    #카드 갯수

dq = deque()
count = int(num)
for i in range(num):
    dq.append(i+1)

while count != 1:
    dq.popleft()
    count-=1
    add = dq[0]
    dq.popleft()
    dq.append(add)

print(dq[0])