# Q1. 사용자에게 자연수를 입력받아 그 자연수의 팩토리얼을 구해 출력

#(1)
# 사용자 입력
'''
num = int(input('Enter a positive integer :'))

factorial = 1
for i  in range(2,num+1):
    factorial*=i
print('factorial =',factorial)

#-------------------------------------------------------------------------

# 파이썬 표준 라이브러리의 math 모듈

# → 수학(math)과 관련된 기능들을 포함하고있는 모듈
# → 특정 모듈에 포함된 기능을 사용하고자 할때는 해당 모듈을 import문을 이용해
#   외부에서 수입해와야한다.
# import문은 반드시 프로그램 가장 상단에 작성해야 한다.

import math

# 사용자 입력
num = int(input('Enter a positive integer :'))
print()

# math 모듈의 factorial 함수를 이용해 팩토리얼을 계산
factorial = math.factorial(num)

# 출력
print('factorial =',factorial)
'''
#-------------------------------------------------------------------------

#Q2.

num = int(input('Enter a positive integer :'))
print()

# 합계를 저장할 변수
total=0

# 1부터 1씩 증가하는 자연수를 표현하는 인덱스변수
number = 0

while(total<=num):
    #인덱스 변수를 1만큼 증가
    number+=1
    # 1부터 1씩 증가하는 자연수들(변수 number)의 함계를 계산
    total+=number
# 반복문이 끝나는 시점에서 변수 total에는 변수 num보다 큰 합계가 대입되어있고,
# 변수 number에는 변수 total에 마지막으로 더한 자연수가 대입되어있다.

print('Total =',total)
print('number =',number)

#----------------------------------------------------------------------------------
#Q3. 사용자가 정수 0을입력할때 까지 정수를 입력받는다
#    사용자가 0을 입력한순간 정수들의 합을 구해서 출력한다.
# (1)
total=0
while(num!=0):
    num = int(input('Enter a positive integer :'))
    total+=num


print('sum =',total)

#--------------------------------------------------------------------------------------