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