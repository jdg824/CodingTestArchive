import sys

input = sys.stdin.readline

subject = int(input())

grade = list(map(int, input().split()))

Max = max(grade)

for i in range(subject):
    grade[i] = grade[i]/Max*100

avg = sum(grade)/subject

print(avg)