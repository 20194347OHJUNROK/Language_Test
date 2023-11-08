# 사용자에게 정수 N을 입력받는다.
# 정수 N이 40보다 크면 "Hello World!" 문자열을 출력한다.
# 프로그램을 실행한 다음 각각 20, 50을 입력해서 실행 결과를 확인한다.
'''
num = int(input('Enter an integer :'))
print()

if num > 40:
    print('Hello World!')

#---------------------------------------------------------------------------------

# 사용자에게 정수 N을 입력받는다.
# 정수 N이 20보다 크고 40보다 작으면 "Do your best!"를 출력
# 실행후 각각 10, 30, 50을 입력해서 실행결과를 확인

num = int(input("Enter an intger :"))

print()

if 20 < num < 40:
    print('Do your best!')


# 파이썬의 비교 연산(파이썬에서만 가능)
# A op1 B op2 C     (and가 생략되어있음)
# -> (A op1 B) and (B op2 C)

# A op1 B op2 C Cp3 D
# -> (A op1 B) and (B op2 C) and (C op3 D)

# if 20 < num < 40:     (and가 생략되어있음)
# -> 20< num     and    num <40    
# ->  True       and      True
# ->            TRUE!!!
#-------------------------------------------------------------------------------------

# 사용자에게 정수 N을 입력받는다.
# 정수 N이 20보다 작거나 40보다 크면 "Dream comes true!"를 출력
# 실행 후 각각 10, 30, 50을 입력해서 실행결과를 확인

num = int(input("Enter an intger :"))
print()

if num<20 or num > 40:
        print("Dream comes true!")

# num = 10
# 변수 num이 20보다 작거나 40보다 크다          #WORNING!!!
# -> 20 > num < 40
# -> 20 > num   and   num < 40
# -> 20 > 10    and     10 > 40
# ->    True    and       False
# ->         FALSE!!!


# 변수 num이 20보다 작거나 40보다 크다
# 1. 변수 num이 20보다 작다
# -> num < 20
# 2. 또는(OR)로 연결 - 논리 합 연산자로 표현
# ->or
# 3. 변수 num이 40보다 크다
# ->num < 40


# 변수 num이 20보다 크고 40보다 작다
# 1. 변수 num이 20보다 크다
# -> num > 20
# 2. 그리고(AND)로 연결 - 논리곱(AND) 연산자로 표현
# -> and
# 3. 변수 num이 40보다 작다
# ->num > 40


#------------------------------------------------------------------------------------------------

# 사용자에게 자연수 N을 입력받는다.
# 자연수 N이 3의 배수(multiple)이면 3의 배수라고 출력한다.
# 프로그램을 실행한 다음 각각 25, 36을 입력해서 실행결과를 확인

num = int(input("Enter an intger :"))
print()

if num%3==0:
    print(num, 'is muliple of 3.')
    # print(f'{num} multiple of 3.')

#--------------------------------------------------------------------------------------------------

# 사용자에게 정수 N을 입력받는다
# 정수 N이 10보다 작거나 40보다 크면 "Hello World!"를 출력
# 그렇지 않으면 "Hello python!"을 출력

num = int(input("Enter an intger :"))
print()

if num<10 or num>40:
    print('Hello World!')
else:
    print('Hello python!')

# 도모르강의 법칙에의해 이런방법으로도 사용이 가능하다
#   if !(num<10 or num>40):
#  -> num >= 10 and num <= 40
#  -> 10<=num<=40

#---------------------------------------------------------------------------------------------

#사용자에게 자연수 N을 입력받는다.
#자연수 N이 홀수이면 홀수라고 출력하고, 짝수이면 짝수라고 출력한다.

#홀수(odd number) : 2로 나누어 떨어지지않는 자연수
#-> 2로 나누었을때 나머지가 1과 같은 자연수

#짝수(Even number) : 2로 나누어 떨어지는 자연수
#-> 2로 나누었을때 나머지가 0과 같은 자연수

num = int(input('Enter a positive integer :'))
print()


if num%2==1:
    print(num,'is and Odd number.')
else:
    print(num,'is an Even number.')

'''
#-----------------------------------------------------------------------------------------------

#사용자에게 정수 N1과 N2를 입력받는다.
#정수 N1과 N2중 큰수에서 작은 수를 뺀값을 구해 출력한다.

#사용자 입력
n1, n2 = map(int,input('Enter two integers: ').split())
print()

# 방법 1
# if - else 구문을 이용해, 변수 n1과 n2중에서 큰 값을 확인
if n1>n2:
    print(f'{n1} - {n2} = {n1-n2}')
else:
    print(f'{n2} - {n1} = {n2-n1}')
    #print('{} - {} = {}'.format(n2,n1,n2-n1))


# 드모르강의 번칙
# !(n1 > n2)
# -> n1 <= n2    


# 방법 2
# if - else 구문을 이용해, 변수 n1과 n2중에서 큰 값과 작은 값을 확인

if n1 > n2:
    max = n1
    min = n2
else:
    max,min = n2, n1

print(f'{max} - {min} = {max-min}')


# 방법 3
# 변수 n1과 n2중에서 n1이 크다고 가정
max, min = n1, n2

# 변수 n2가 n1보다 큰지 확인
if n1 < n2:
    max, min = n2, n1

print(f'{max} - {min} = {max - min}')
