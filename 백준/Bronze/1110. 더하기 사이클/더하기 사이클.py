num_d = int(input())
count=0

num = num_d
while(True):
    a = num // 10
    b = num % 10
    c = (a+b)%10
    num = (b*10) + c
    count +=1

    if(num == num_d):
        break

print(count)