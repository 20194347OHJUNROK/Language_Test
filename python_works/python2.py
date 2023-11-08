#--------------------------------------------------------

# 변수의 정의

value = 10
pi = 3.141592

# 아래와 같은 형태로 출력하기 위해 format 매서드를 이용해 형식화된
# 문자열을 생성하고 이 문자열을 print 함수를 이용해서 출력
# value =10, pi=3.141592
print('value = {}, pi = {}'.format(value, pi))

#----------------------------------------------------------------

# f-문자열(f-string)을 이용해 형식화된 문자열(formatted string)을
# 생성하고, 이 문자열을 print함수를 이용해서 출력
print(f'value = {value}, pi = {pi}')

# f- 문자열에서도 서식 지정자와 정확도를 지정해서, 변수 pi를
# 소수점 이하 셋째짜리가지만 출력
# f-문자열은 파이썬 3.6에서 도임된 기능
print(f'value = {value}, pi = {pi:.3f}')

# f - 문자열에서 서식 지정자를 지정하지않고 정확도만 지정한경우,
# 변수 pi를 전체 세자리 값으로 즉 정수를 포함해서
# 세자리 값을 가지는 문자열을 생성한다.
print(f'value = {value}, pi = {pi:.3}')

#-----------------------------------------------------------------
# 표준입력 (standard input)
# -> 컴퓨터 시스템의 기본 입력 장치

# input 함수를 이용해 표준입력을 통해 사용자에게 값을 입력
# -> 사용자가 키보드를 이용해 값을 입력하고 엔터 키를 입력할때까지 사용자의 입력을 기다린다.
#input()

#사용자가 입력한 값을 변수에 대입해서 프로그램에서 사용
value = input()

print('value =', value)
print()

#프람프트 메시지를 출력해서 사용자가 어떤 동작을 해야하는지 알린다.
# -> 출력할 프람프트 메시지를 input함수에 지정한다.

value = input('Enter of positive integer : ')

print('value =', value)
#---------------------------------------------------------------------------------

# print('value + 5 = ',value + 5)
# print('value + 5 = ','20' + 5)       #WRONING!
# 문자열은 문자열과만 연결할수있다 !!
# -> input 함수를 이용해 사용자에게 값을 입력받으면, 그 값을 문자열(string)이다.

# type 함수를 이용해 변수 value의 자료형을 확인
print('type(value) = ', type(value))

# input 함수를 이용해 입력받은 값은 항상 문자열이다. 따라서 프로그램에서
# 필요한 자료형으로 변환한 다음 사용한다.
value = int(value)
# -> value = int(value)
# -> value = 20

print('value + 5=', value + 5)

print()
#------------------------------------------------------------------------------------

# 한 문장에서 input 함수와 변환 함수를 같이 사용할수있다.
# value = input('Enter of positive integer : ')
# value = int(value)
value = int(input('Enter of positive integer : '))

# -> input 함수를 이용해 입력 받은 문자열을 int변환함수를 이용해 정수로 변환해서 변수에 대입

print('value + 5=', value + 5)

print()

#-----------------------------------------------------------------------------------------
# 사용자에게 빈칸으로 구분된 정수 여러개를 입력받아, 변수 여러개에 각각 대입

# '10 20'

# input('Enter two integers :')      # '10 20'
# input('Enter two integers :').split()      # ('10', '20')
# map(int,input('Enter two integers :').split())      # (10, 20)

# input 함수를 이용해 입력 받은 문자열을, split 메서드를 이용해 빈칸을 기준으로 쪼갠다.
# 그렇게 나눈 각각의 문자열을 map 함수와 int 변환 함수를 이용해 int 자료형으로 변환한다.

n1, n2 = 10, 20
# -> n1, n2  = (10, 20)

n1, n2 = map(int, input('Enter two integers : ').split())  # '10 20'
# -> n1, n2  = (10, 20)

print('n1 + n2 =', n1 + n2)
print()

n1, n2, n3 = map(int, input('Enter three integers : ').split())  # '10, 20, 30'
# -> n1, n2, n3  = (10, 20, 30)

print('n1 + n2 + n3 =', n1 + n2 + n3)
print()

#-----------------------------------------------------------------------------------------

# 원의 반지를 R을 정수로 입력받는다.
# 반지름이 R인 원의 면적(area)와 둘레(circumference)를 구해서 출력

# 사용자에게 원의 반지름을 입력 받는다.
radius = int(input('Enter a radius of a circle : '))
print()

# 원주율을 나타내는 변수
pi = 3.14

# 원의 면적과 둘레를 계산
area = pi*radius**2
circumference = (radius*pi)*2

print('radius = ', radius)
print('pi=', pi)
print('area =', int(area))
print(f'circumference = {circumference:.1f}')
#--------------------------------------------------------------------------------------------

# 사용자에게 정수 n1과 n2를 입력받는다.
# n1을 n2로 나눈 몫(quotient)와 나머지(remainder)를 구해서 출력한다.

# 사용자입력
# '10 3' -> ('10', '3')
#('10','3') -> (10, 3)
n1, n2 = map(int, input('Enter two integers: ').split())
print()

# 변수 n1을 n2로 나눈 몫과 나머지를 계산
quotient = n1//n2
remainder = n1 % n2

# 출력
print('Qotient =', quotient)
print('Remainder =', remainder)
