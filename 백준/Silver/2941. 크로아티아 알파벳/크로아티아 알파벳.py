# replace 함수를 제대로 알지 못했다
# 크로아티아 알파벳에 해당하는 문자를 변환시켜서 하나로 줄이는 방법

import sys

input = sys.stdin.readline
croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
word = input()

for a in croatia:
    if a in word:
        word = word.replace(a, "$")

print(len(word)-1)