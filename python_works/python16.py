# Q1.
'''
# 고정인자함수
def get_average(numbers):

    return sum(numbers)/len(numbers)


numbers=list()

while True:
    num = int(input('Enter an integer : '))
    if num==0:break
    # 사용자가 입력한 정수가 0이 아니면, 리스트 numbers에 추가
    numbers.append(num)

print('sum = ',sum(numbers))
print(f'average = {get_average(numbers):.1f}')
'''

# print('average = ', get_average(10, 20))                 WRONG !!
# print('average = ', get_average(10, 20, 30))             WRONG !!

#-----------------------------------------------------------------------------------------

# 리스트 언패킹(list unpacking)
# → 리스트 또는 튜플 앞에 *을 써서, 리스트 또는 튜플의 요소들을 풀어내는 기능

numbers = [1, 2, 3, 4, 5]
print('numbers = ',numbers)
# → numbers = [1, 2, 3, 4, 5]
print('*numbers = ',*numbers)
# → *numbers = 1 2 3 4 5

# → numbers = 1, 2, 3, 4, 5
print('numbers = ',end = '')
print(*numbers, sep=', ')
print()

# 가변 인자 함수(variable argument function)
# → 함수를 호출할 때 지정해야할 인자의 개수가 정해지지 않은 함수
# → 매개변수 앞에 *를 붙여서 가변 인자로 지정한다.

# → 이때 args는 argument의 약자이며, 그냥 관례적으로 가변 인자에 붙이는 식별자이다.
    # → 반드시 args라는 식별자를 쓸필요는 없다.
    # → 매개변수를 가변인자로 지정하면, 함수를 호출하면서 지정한 인자들을 각 요소로 가지는
    #   튜플을 생성하고 매개변수에 초기화 된다.
    # →이떄, 매개변수 args는 튜플이므로 그 값을 변경하거나 삭제할수 없다!!
def get_Argument(*args):
    return args
# args = (10, 20)
# args = (10, 20, 30)

print('argument = ', get_Argument(10, 20))               # OK!
print('argument = ', get_Argument(10, 20, 30))         #  OK!

# print('argment = ',get_Argument([10, 20]))             # WRONG!!
# → ([10, 20], )
print('argument = ',get_Argument(*[10,20,30]))           # OK!


#--------------------------------------------------------------------------------------------------------------------

# 가변 인자 함수에서 고정 인자를 사용

# def print_values(*args):           # WRONG!
# → 고정 인자와 가변인자를 함께 사용할때에는, 고정 매개변수를 먼저 지정하고
#   그 다음 매개변수를 가변인자로 지정한다.
def print_values(prefix, *args):
    for i in args:
        print(prefix, i)

print_values('value = ', 10)
print_values('number = ',10, 20, 30)

#---------------------------------------------------------------------------------------------------------------------

# 매개 변수의 기본 값(기본 인자)
# → 함수를 정의하면서 매개변수에 기본값을 지정
# → 함수를 호출할때 , 기본값을 지정한 매개변수에 전달된 인자가 있으면
#   그 인자로 초기화하고 없으면 기본값으로 매개변수를 초기화한다.
# → 인자로 자주 사용하는 값을 매개변수의 기본값으로 설정하면 유용하다!!
# → 기본값이 지정된 매개변수 다음에 기본값이 없는 매개변수가 올수 없다!!!

def print_info(name,age,gender='UNDISCLOSED'):
    # def print_info(name, age=0, gender)       # WRONG!
    print('Name = ',name,end=' ')
    print('Age = ',age,end=' ')
    print('Gender = ',gender,end=' ')

# print_info함수는 매개변수가 3개이므로, 함수를 호출할때에는 반드시 
# 인자를 3개 지정해야한다
print_info('Harry',13,'Male')
print()

# 매개변수의 기본값을 지정하지 않은 경우에는 오류가 발생하지만, print_info함수에
# 매개변수의 기본값을 지정한 경우에는 gender의 기본값인 'UNDISCLOSED'가 들어간다.
print_info('Mina',14)
print('\n')

#---------------------------------------------------------------------------------------------------------------------------------

# 키워드 인자(KeyWord argument)
# → 함수를 호출하면서 , 인자가 전달된 매개변수를 지정할수있다!
# → 키워드 인자를 사용하면 , 순서를 맞추지 않아도 키워드에 해당하는 매개변수에 인자가 전될된다!
# → 이때, 호출하는 매개변수는 함수에 선언한 매개변수와 같아야한다! 
print(1, 2, 3,sep=', ')

def introduce(name, age):
    print('My name is ',name)
    print(f'I am {age} years old')
    print()

# 함수를 호출할때에는 인자들을 반드시 매개변수에 전달될 순서에 맞게 넣어야한다.
# introduce('JunRok', 23)

# 키워드 인자 사용!
introduce(age=23,name='JunRok')