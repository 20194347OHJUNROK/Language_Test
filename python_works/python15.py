# 함수의 정의(def선언)
from msvcrt import kbhit


def print_name():
    print('오준록 / 21 / 남 / A형')

# 함수의 호출
print_name()

#----------------------------------------------------------------------------

# 사용자가 입력한 이름을 출력해주는 함수
def greeting(name):
    print(f'Hi, {num}. Nice to meet you!')


num=input('Enter your name : ')
greeting(num)

#------------------------------------------------------------------------------

# 반지름을 입력받아 원의 넓이를 구해주는 함수
def circle_area(radius):
    area=radius*radius*3.141592
    return area

r=int(input('Enter a radius :'))
print()

print(f'area of the circle = {circle_area(r):0.3f}')
print()
#-----------------------------------------------------------------------------------

# 자연수를 입력받아 자연수의 약수를 구해주는 함수
def get_division(value):
    divisors=list()
    for i in range(1,value+1):
        if value%i==0:
            divisors.append(i)
    return divisors


num = int(input('Enter an integer : '))
print()

print(f'divisors of {num} = {get_division(num)}')