'''
# 사용자에게 "월"과 "일"을 입력받아, 그 날짜의 요일을 구해서 출력

#datatime 모듈을 이용해 특정 날짜의 요일을 계산
import datetime

# 사용자 입력
month=int(input('Enter the month : '))
day =int(input('Enter the day : '))
print()

# 요일을 나타내는 문자열을 리스트 또는 튜플에 저장
day_of_week=('Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday')

# datetime 모듈의 date 함수를 이용해 date 객체를 생성하고, weekday 메서드를 이용해 요일을 구함
# → weekday 메서드에는 월요일이면 0을, 화요일이면 1을, ... 일요일이면 6을 반환한다.

day_week = datetime.date(2022, month, day).weekday()

# 출력
print(f'2022 - {month:02d} - {day:02d} {day_of_week[day_week]}')

#---------------------------------------------------------------------------------------------------------------------------------------------------------------

# random(난수) 모듈 추가
import random

# random.random 함수 : 0<= n < 1 의 범위에 포함된 임의의 소수를 생성
value = random.random()

print('value = ',value)

# random.randint 함수 : 지정한 범위에 포함된 임의의 정수를 생성
value= random.randint(1, 10)
# → 1 <= n <= 10 범위에 포함된 임의의 정수를 생성
print('value = ',value)
'''
#-------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Q1. 1부터 45사이의 중복되지않는 임의의 자연수 6개를 구해, 오름차순으로 정렬해서 출력
import random

#(1)
numbers=list()

for i in range(6):
    num = random.randint(1,45)
    numbers.append(num)
    numbers=list(set(numbers))    

# numbers.sort()
# print('Numbers : ',numbers.sort())        WRONG!!
# print('Numbers : ',*numbers)
print('Numbers : ',*sorted(numbers))


#(2) 집합을 사용
numbers = set()

while len(numbers)<6:
    num=random.randint(1, 45)
    # add 메서드를 이용해 집합에 추가
    numbers.add(num)

print('Numbers : ',*sorted(numbers))
print()

#---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

print('1. odd number')
print('2. Even number')
print('0. Exit')
print()

# 사용자가 입력할수있는 유효한 값
VALID_CHOICE=(0, 1, 2)

# 사용자가 입력한 선택을 문자열로
CHOICES = ('','Odd','Even')

while True:

    # 사용자 입력
    choice = int(input('Enter your choice : '))  

    # 1. 사용자가 0을 입력하면 반복문 종료
    if choice==0: break

    # 2. 1부터 10사이의 임의의 자연수를 생성
    value=random.randint(1, 10)

    # 3. 생성한 임의의 자연수가 홀수인지, 짝수인지 확인하고 사용자가 입력한 선택이 맞는지 확인
    if choice not in VALID_CHOICE:
        print('oh NO!!! Try Again.')
        continue
    if value%2==choice%2:
            print(f'Exellent! your choice is {CHOICES[choice]}. The number is {value}.')
    else:
        print(f'Oops! Your choice is {CHOICES[choice]}. The number is {value}')
    print()

# 4. 종료 문구출력
print('Thank you BYE!')    