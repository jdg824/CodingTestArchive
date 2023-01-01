import sys

input = sys.stdin.readline

total = 0

test_case = int(input())

for i in range(test_case):
    grade = list(map(int, input().split()))

    for j in range(1, grade[0]+1):
        total = total + grade[j]

    avg = total / grade[0]
    count = 0

    for j in range(1, grade[0]+1):
        if(grade[j] > avg):
            count += 1
    percent = count/grade[0] * 100
    print('{0:0.3f}%'.format(percent))
    total = 0