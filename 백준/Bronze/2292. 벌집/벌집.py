import sys

input = sys.stdin.readline

num = int(input())

count = 1
sub = 6
num = num-1
while num >0:
    num = num-sub
    sub+=6
    count+=1

print(count)