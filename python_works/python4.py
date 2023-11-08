#%% Q 1.
# 사용자에게 정수 N을 입력받는다.
# 정수 N이 양수인지, 0인지, 음수인지 구분해서 출력한다.

import math


num = int(input("Enter an integer:"))

if num > 0:
    print(num,"is a positive number!")
elif num < 0:
    print(num,"is a negative number!")
else:
    print(num,"is ZERO!!")

#%% Q2.
# 사용자에게 자연수 N1과 N2를 입력받는다.
# 자연수 N1이 N2의 약수(factor)인지, N2의 배수(multiple)인지,
# N2의 약수도 아니고 배수도 아닌지 확인해서 출력

n1, n2 = map(int,input('Enter two integers:').split())

if n1%n2==0:
    print(f'{n1} is a multiple of {n2}.')
elif n2%n1==0:
    print(f'{n1} is a factor of {n2}.')
else:
    print(f"{n1} is neither a multiple of {n2} nor a factor.")

#%% Q3.
# 사용자에게 국어, 영어, 수학 점수를 입력받고
# 점수들의 평균을 계산하여 등급을 구하라.

Korean = int(input('Enter the Korean score : '))
Math = int(input('Enter the Math score : '))
English = int(input('Enter the Englsih score : '))
print()


average = (Korean + Math + English)/3

if(average>=90):
    grade = 'A'
elif(average>=80):
    grade = 'B'
elif(average>=70):
    grade = 'C'
elif(average>=60):
    grade = 'D'
else:
    grade = 'F'

print(f'Average : {average : .1f}')
print('Grade :',grade)    


#%% Q4.
# 사용자에게 급여를 입력받아, 소득세와 수령액을 구해서 출력
# 원 단위 이하는 절삭한다.

salary = int(input('Enter your salary: '))
print()

# 소득세(income tax) = 급여 * 소득세율(income tax rate)
if salary >= 8000000:
    tax_rate = 0.3
elif salary >= 5000000:
    tax_rate = 0.25
elif salary >= 2000000:
    tax_rate = 0.2
else:
    tax_rate = 0.15
#-> 세금을 계산할때는 원 단위 이하는 절삭한다. 즉, 세금은 int 자료형이 되어야한다.
income_tax = int(salary * tax_rate)

# 수령액 = 급여 - 소득세
amount = salary - income_tax

print(f'Income tax:{income_tax:,}')
print(f'amount tax:{amount:,}')
