# Q1. 사용자에게 2보다 큰 자연수 N을 입력받아 소수(prime)를 출력하고,
#      출력한 소수들의 개수를 출력하라

num=int(input('Entera positive integer greater than 2 :'))
print()

count = 0

#(1)

# for i in range(2,num+1):
#     is_prime=True
#     for k in range(2,i):
#         if i%k==0:
#             is_prime=False
#             break
#     if is_prime:
#         print(i,end=' ')
#         count+=1
# print()
# print('Count = ',count)


#(2)
list=[]

for i in range(2,num+1):
    is_prime=True
    for k in range(2,i):
        if i%k==0:
            is_prime=False
    if is_prime:
        list.append(i)
        count+=1
print(list)
print('count = ',count)