'''
프로그램 이름 : Stack 구현
내용 : BaekJoon 10828, 스택 문제
보완 내용 :
1. python에서 입력 받을때 속도 sys.stdin.readline() > input() - import sys 선언하고 사용
2. Stack 구현시 stack[-1] top 값을 제거하지 않고 확인만 함
'''
import sys

again = int(sys.stdin.readline())
stack = []  #stack 공간 list로 생성 - 굳이 크기를 정해놓지 않아도 됨

for i in range(again):
    command = sys.stdin.readline().split()

    if command[0] == "push":
        stack.append(command[1])

    elif command[0] == 'pop':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())

    elif command[0] == 'top':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])

    elif command[0] == 'size':
        print(len(stack))

    elif command[0] == 'empty':
        if len(stack) == 0:
            print(1)
        else:
            print(0)