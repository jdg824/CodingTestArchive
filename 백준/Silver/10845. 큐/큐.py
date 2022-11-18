'''
프로그램 이름 : Queue 구현
내용 : BaekJoon 10845, 큐 문제
보완 내용 :
1. 기존에 했던 방버에서 deque 사용
2. list(map(str, input().split())) 한번에 입력 다받기 split 땜에
'''
import sys
from collections import deque

input = sys.stdin.readline  #한번에 처리
num = int(input())
queue = deque()

for i in range(num):
    command = list(map(str, input().split()))

    if command[0] == 'push':
        command[1] = int(command[1])
        queue.append(command[1])

    elif command[0] == 'pop':
        if len(queue) ==0:
            print(-1)
        else:
            print(queue.popleft())

    elif command[0] == 'size':
        print(len(queue))

    elif command[0] == 'empty':
        if len(queue)==0:
            print(1)
        else:
            print(0)

    elif command[0] == 'back':
        if len(queue)==0:
            print(-1)
        else:
            print(queue[-1])
    elif command[0] == 'front':
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])