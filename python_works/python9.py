# 사용자에게 정수 2개를 입력받아 정수 n1과 n2사이에있는 정수들 중에서
# 1의 자리가 3이 아닌 정수를 출력하라!
'''
from pickle import FALSE, TRUE


n1,n2=map(int,input('Enter two integer :').split())

Max=max(n1,n2)
Min=min(n1,n2)

for i in range(Min+1,Max):
    count=i%10
    if(count!=3):
        print(i,end=' ')
print()
#-------------------------------------------------------------------------------

# Q2. 사용자에게 자연수 2개를 입력받아 1에서 부터 n1까지의 자연수들 중에서
#     2의 배수를 출력하고, 그 배수들의 개수를 출력(1<=n<=n1)

#(1)
n1,n2=map(int,input('Enter two integer :').split())
print()

count =0

print(f'Muliples of {n2} = ',end='')

for i in range(1,n1+1):
    if(i%n2==0):
        print(i,end=' ')
        count+=1

print()

print('count = ',count)
#-----------------------------------------------------------------------------------
#(2)
Multiples = list()

for i in range(1,n1+1):
    if i%n2==0:
        Multiples.append(i)

print(f'Multiples of {n2} = ',Multiples)
print('Count = ',count)
print()
'''
#--------------------------------------------------------------------------------------

# Q3. 사용자에게 1보다 큰 자연수를 입력받는다 입력받은 자연수가 소수(prime)인지 아닌지 출력하라!

num=int(input('Entera positive integer greater than 1 :'))

is_prime=True

for i in range(2,num):
    if num%i==0:
        is_prime=False
        break

if is_prime:
    print(num,'is a prime Number!')
else:
    print(num,'is Not a prime Number!')