dict = {}

import sys
input = sys.stdin.readline

word = list(map(str, input().upper()))
word.pop(len(word)-1)   #null 문자 제거

for i in word:
    if i in dict:
        dict[i] += 1
    else:
        dict[i] = 1

max = 1

for i in dict:
    if(max < dict[i]):
        max = dict[i]
        max_w = i
    elif(max == dict[i]):
        if(len(word) == 1):
            max_w = i
        else:
            max = dict[i]
            max_w = '?'

print(max_w)
