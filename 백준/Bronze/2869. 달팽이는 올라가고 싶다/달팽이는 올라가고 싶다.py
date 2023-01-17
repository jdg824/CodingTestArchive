import sys

input = sys.stdin.readline

a, b, v = map(int, input().split())

if (v-b)/(a-b) != int((v-b)/(a-b)):
    print(int((v - b) / (a - b))+1)
else:
    print(int((v-b)/(a-b)))