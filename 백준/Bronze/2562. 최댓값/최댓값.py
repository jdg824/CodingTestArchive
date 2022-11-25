arr = []

import sys

input = sys.stdin.readline

for i in range(9):
    num = int(input())
    arr.append(num)

max = 0
max_idx = 0
for i in range(9):
    if(max < arr[i]):
        max = arr[i]
        max_idx = i+1

print(max)
print(max_idx)