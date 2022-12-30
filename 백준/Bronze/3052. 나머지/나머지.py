#파이썬 set함수 이요
#set함수는 집합 함수로 중복된걸 없애준다 하지만 순서는 보장 x

arr = []
data = []

import sys

input = sys.stdin.readline

for i in range(10):
    num = int(input())
    arr.append(num)

for i in range(10):
    less = arr[i] % 42
    data.append(less)

d_set = set(data)

print(len(d_set))
