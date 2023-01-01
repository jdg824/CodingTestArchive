import sys

input = sys.stdin.readline

test_case = int(input())

for i in range(test_case):
    num, word = input().split()
    num = int(num)
    word_list = list(word)
    length = len(word_list)
    for j in range(length):
        for k in range(num):
            print(word_list[j], end='')
    print()