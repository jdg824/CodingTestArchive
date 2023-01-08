'''''
import sys
input = sys.stdin.readline
cnt = {}

word = input()
u_word = word.upper()
w_list = list(u_word)

for i in w_list:
    if i in cnt:
        cnt[i] += 1
    else:
        cnt[i] = 1

print(cnt)

max = 1
for i in w_list:
    if(cnt[i] >= max):
        max = cnt[i]
    else:
        max = 0

print(max)
'''''

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