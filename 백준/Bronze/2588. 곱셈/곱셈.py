a = int(input())
b = int(input())

c = b % 10
d = (b % 100 - c) // 10
e = b // 100

print(a * c)
print(a * d)
print(a * e)
print(a * b)