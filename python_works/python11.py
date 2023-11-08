# 문자열에서 특정 문자열을 찾기

# find 메서드  : 문자열에서 지정한 내용을 찾아 그 위치를 반환
hello = 'Hello World!'

print('hello =',hello)
print('hello.find("l") =' , hello.find('l'))
print('hello.find("lo") =', hello.find('lo'))
print('hello.find("xo") =' , hello.find('xo'))

print('==========================================================================')

#-------------------------------------------------------------------------------------

# 문자열에서 특정 문자열이 나온 횟수를 확인

# count 메서드 : 문자열에서 지정한 내용이 나온 횟수를 반환

hello = 'Hello World!'

print('hello =',hello)
print('hello.find("l") =' , hello.count('l'))
print('hello.find("lo") =', hello.count('lo'))
print('hello.find("xo") =' , hello.count('xo'))

print('==========================================================================')

#----------------------------------------------------------------------------------------

# 리스트의 마지막에 새로운 요소를 추가

numbers = [1, 2, 3, 4, 5]
print('numbers = ',numbers)

# append 메서드 : 주어진 값을 리스트의 마지막 요소로 추가
numbers.append(6)
print('numbers = ',numbers)

# extend 메서드 : 주어진 시퀀스 자료형 값의 요소들을 리스트의 요소들로 추가
numbers.extend([9, 10])
print('numbers = ',numbers)
print()
print('==========================================================================')
#-------------------------------------------------------------------------------------------

# 리스트의 특정 위치에 주어진 값을 추가

numbers = [1, 2, 4, 5]
print('numbers = ',numbers)

# insert 메서드 : 리스트의 주어진 위치에 주어진 값을 추가
numbers.insert(2, 10)
# → 리스트 numbers의 인덱스가 2인 위치에 10이라는 값을 추가
# → 이때 인덱스가 2인 위치 다음에 나오는 요소들은 뒤로 밀린다!!!
print('numbes = ',numbers)

numbers.insert(0, 11)
print('numbers = ',numbers)

numbers.insert(len(numbers),12)
# → 리스트의 마지막 부분에 12를 추가
print('numbers = ',numbers)
# → numbers.append(12)가 더 유리

print('==========================================================================')
#-----------------------------------------------------------------------------------------

# 슬라이스 연산을 이용해 리스트의 특정 위치에 있는 여러 요소들을 추가
numbers =[1, 2, 5, 10]
print('numbers = ',numbers)

# numbers[1:3]
# → 인덱스가 (1<=n<3)인 요소들로 추출
# → 인덱스가 1, 2, 인 요소들을 추출
# → [2, 5]인 값을 출력

numbers[2:2] = [10,11]
# → 인덱스가 2인 위치에 [10, 11]이라는 값을 새로운 요소로 추가
# → 이때 인덱스가 2인 위치에 있던 요소는 뒤로 밀린다!!!
print('numbers = ',numbers)

numbers[2:3] = [12, 13]
# → 인덱스가 범위가 (2<=n<3)인 위치에 [12, 13]이라는 값을 새로운 요소로 추가
# → 인덱스가 2인 위치에 있던 요소는 사라지고 새로운 요소가 추가된다
print('numbers = ',numbers)

print('==========================================================================')
#---------------------------------------------------------------------------------------

# 파이썬 프로그램에서는 쉼표(,)로 구분해서 값을 나열하면 튜플(tuple)을 생성한다!
n1, n2 = 10, 20
# → n1 , n2 = (10, 20)

numbers[2:3]=12,13
# → numbers[2:3]=(12, 13)

#-----------------------------------------------------------------------------------------

# 리스트에서 특정 위치에 있는 요소를 제거

numbers = [1, 2, 3, 4, 5]
print('numbers = ',numbers)


# pop 매서드 : 리스트에서 지정한 위치에 있는 요소를 제거하고 제거한 요소를 반환
# → 만약 제거할 요소의 위치를 지정하지 않으면 마지막 요소를 제거
value = numbers.pop()
print('numbers = ',numbers)
print('value = ',value)

value = numbers.pop(0)
print('numbers = ',numbers)
print('value = ',value)


# del 연산자 : 지정한 인덱스를 제거
del numbers[2]
print('numbers = ',numbers)


# remove 메서드 : 리스트에서 지정한 값(요소)을 제거
# → 리스트의 요소들 중에서 첫번째 값만 제거한다.

numbers = [1, 2, 3, 4, 5, 4, 3, 2, 1]
numbers.remove(2)
print('numbers = ',numbers)

numbers.remove(1)
print('numbers = ',numbers)

print('==========================================================================')

#-----------------------------------------------------------------------------------------

# 리스트에서 특정한 값의 위치(인덱스) 또는 개수 구하기
numbers = [1, 5, 10, 15, 20, 15, 10, 5, 10]
print('numbers = ',numbers)

# index 메서드 : 리스트에서 주어진 값의 인덱스를 참조
# → 같은 값이 여러개인 경우에는 첫번째 요소의 인덱스를 참조한다.
index = numbers.index(10)
print('numbers.index(10) = ', index)

# count 메서드 : 리스트에 지정한 값의 개수를 참조
print('numbers.count(10) = ', numbers.count(10))
print('==========================================================================')

#---------------------------------------------------------------------------------------------
numbers = [3, 5, 1, 4, 2]
print('numbers = ',numbers)

# 리스트의 순서 뒤집기와 정렬, 모든 요소들을 제거

# reverse 메서드 : 리스트의 순서를 역순으로 변경

#  sort 메서드 : 리스트의 요소들을 오름차순으로 정렬
# → 정렬하기 위해서는 반드시!! 리스트의 모든 요소들의 자료형이 같아야한다
# → sort 메서드에서는 reverse 인자를 True로 지정하면, 내림차순으로 정렬한다

# 오름차순 정렬
numbers.sort()
print('numbers = ',numbers)

# 내림차순 정렬
numbers.sort(reverse=True)
print('numbers = ',numbers)


# clear 메서드 : 리스트의 모든 요소들을 제거
numbers.clear()
print('numbers = ',numbers)
print('==========================================================================')

#----------------------------------------------------------------------------------------
numbers=[3,5,1,4,2]
print('numbers = ',numbers)

# sort 메서드와 sorted 함수 : 리스트의 요소들을 오름차순으로 정렬
# → sort 메서드 : 기존에 선언된 리스트에서 요소들의 순서가 변경
# → sorted 함수 : 리스트에서 요소들의 순서는 그대로이고, 정렬된 새로운 리스트를 생성!

# 오름차순 정렬
numbers = sorted(numbers)
print('numbers = ',numbers)
# → 리스트의 numberse는 그대로이고, 리스트 numberse의 요소들을 오름차순으로 정렬해서
# → 새로운 리스트를 생성하고 , 그 정렬된 리스트를 식별자 numbers란 변수에 새로 대입

# 내림차순 정렬
numbers = sorted(numbers,reverse=True)
print('numbers = ',numbers)
print('==========================================================================')

#---------------------------------------------------------------------------------------------

# 리스트의 대입과 복사

# num = 3
# → C/ JAVA 경우 : 변수 num에 할당된 저장공간에 3이라는 값을 저장한다!
# → Phyton 경우 : 3이 저장되어 있는 저장 공간에 식별자 num을 붙인다!
# 그래서 같은 저장공간에 식별자를 여러개 선언할수있다.

#ex1) 
num1 = 3
print('num1 =',num1)

# 식별자 num1이라는 저장공간에 새로운 식별자 num2를 붙인다
num2=num1
print('num2 = ',num2)



#ex2)

numbers = [1, 2, 3, 4, 5]
print('numberse = ',numbers)

values=numbers
print('valuese = ', values)

values[2]=6
print('valuese = ', values)


# is 연산자 : 두 변수가 같은 저장 공간(객체)를 가리키는지 검사
if numbers is values:
    print('same object!')
# is not 연산자 : 두 변수가 다른 저장 공간(객체)를 가리키는지 검사
if numbers is not values:
    print('Different object!') 

# copy 메서드 : 리스트를 복사해서 새로운 리스트를 생성
values = numbers.copy()
# → 리스트 number를 복사해서 새로운 리스트를 생성하고, values란 식별자에 대입

if numbers is values:
    print('same object!')
# is not 연산자 : 두 변수가 다른 저장 공간(객체)를 가리키는지 검사
if numbers is not values:
    print('Different object!') 
print('==========================================================================')

#-------------------------------------------------------------------------------------------------

# enumerate 함수 : 주어진 시퀀스 자료형의 값으로(인덱스(index) , 요소(item))의 쌍을 순차적으로 생성!

numbers = [4, 17, 32, 3, 8, 13, 41, 27, 16, 1]
print('numberse = ',numbers)

# enumerate(numbers)
# → (0, 4),(1, 17),(2, 32).....(9, 1)

for index, item in enumerate(numbers):
    print(f'index , item = {index,item}')
# 콤마(,)는 튜플을 생성!
# → index, item = (0, 4)
# → index, item = (1, 17)
# → index, item = (2, 32)
# ...
# → index, item = (9, 1)
print('==========================================================================')

#----------------------------------------------------------------------------------------------

# for 구문에서 in 키워드 다음에 시퀀스 자료형 값이 오면, 반복이 한번 수행될때마다
# 그 시퀀스 자료형 값에서 요소(값)를 하나씩 추출해서 in 키워드 앞에 나오는 변수에 대입한다!
# → 이때 , 요소의 값만 구할수 있고 인덱스는 구할수없다

for item in numbers:
    print('item = ',item)
print('==========================================================================')


# 문자열(string)도 시퀀스 자료형이므로 for 구문을 이용해 문자열에 포함된
# 문자들을 차례대로 추출할수있다.

hello = 'Hello World!'

# 이때 변수 ch에는 문자열의 문자들이 하나씩 순차적으로 대입된다!
for ch in hello:
    print(ch)
