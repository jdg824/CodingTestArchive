'''
프로그램 이름 : 요세푸스 순열 구현
내용 : BaekJoon 1158, 요세푸스 문제
보완 내용 :
1. 환형큐 원리 이용
'''

import sys
arr = []
delete = []
input = sys.stdin.readline

num, count = map(int, input().split())

for i in range(num):
    arr.append(i+1) #배열 생성

idx = count -1

for i in range(num):
    if idx >= len(arr):
        idx = idx % len(arr)
        delete.append(arr[idx])
        del arr[idx]
        idx += count -1
    else:
        delete.append(arr[idx])
        del arr[idx]
        idx += count -1

print("<", end='')
for i in range(num):
    print(delete[i], end='')
    if i<num-1:
        print(', ', end='')
print(">")