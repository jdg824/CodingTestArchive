import sys

input = sys.stdin.readline
mtrx1 = []
mtrx2 = []

row, col = map(int, input().split())

for i in range(row):
    mtrx1.append(list(map(int, input().split())))

for i in range(row):
    mtrx2.append(list(map(int, input().split())))

for i in range(row):
    for j in range(col):
        print(mtrx1[i][j] + mtrx2[i][j], end=' ')
    print()
