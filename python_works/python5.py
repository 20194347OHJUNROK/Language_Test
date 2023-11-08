#%% Q1. 사용자에게 정수 2개를 입력받아 변수에 대입하고, 두 변수를 교환(swap)해서 출력

from audioop import reverse


n1, n2 = map(int,input('Enter two ingers : ').split())
print()

print(f'n1 = {n1}, n2 = {n2}')

# 변수 n1과 n2를 임시변수 temp를 통해 교환(swap)
temp = n1
n1 = n2
n2 = temp

print(f'n1 = {n1}, n2 = {n2}')


# 파이썬에서는 대입 구문을 이용해 여러 변수에 각각의 값을 대입할수있다!! (다중 대입)

# n1, n2 = 20, 10
n1, n2 = n2, n1
# -> n1, n2 = (n2, n1)      ()튜플을 생성 생략가능!

print(f'n1 = {n1}, n2 = {n2}')

#%%   리스트(list)
# -> 여러 값을 대괄호 [] 로 묶어서 표현하는 자료형
# -> 리스트에 포함된 각각의 값을 요소(element) 또는 원소(item)라고 한다.
# -> 리스트의 각 요소에 접근하기 위해 인덱스(index)라고 부르는 정수를 사용한다.
# -> 인덱스는 0부터 시작해서 1씩 증가하는 정수이며, 요소가 리스트에서 몇 번째 요소인지 나타낸다.

# 리스트 생성
numbers = [1, 2, 3, 4, 5]

# 리스트의 식별자, 인덱스 연산자({}), 그리고 접근하고자 하는 요소의 인덱스를 이용해 요소에 접근
# numbers{2}        # 3에 접근하고자 할때

print('numbers[2] =', numbers[2])       # 3

# 리스트의 요소에 새로운 값을 대입가능
numbers[2] = 11

# 리스트의 모든 요소들을 출력
print('numbers =',numbers)      #[1, 2, 11, 4, 5]

# 리스트의 새로운 요소들을 추가하고싶을때
# append 메서드를 사용
numbers.append(6)

print('numbers =',numbers)      #[1, 2, 11, 4, 5, 6]


# remove 메서드를 이용해 리스트의 요소를 제거
numbers.remove(11)

print('numbers =',numbers)      #[1, 2, 4, 5, 6]


#-------------------------------------------------------------------------------------------------------------------

# 빈 리스트 생성
# numbers = {}
# numbers= list()

# append 메서드를 이용해 빈 리스트에 새로운 요소들을 추가
numbers.append(3)
numbers.append(4)
numbers.append(2)
numbers.append(1)
numbers.append(5)

print('numbers =',numbers)      #[3, 4, 2, 1, 5]


# sort 메서드를 이용해 리스트의 요소들을 오름차순으로 정렬
numbers.sort()

print('numbers =',numbers)      #[1, 2, 3, 4, 5]


# sort 메서드를 이용해 리스트의 요소들을 내림차순으로 정렬
# reverse = True 를 사용
numbers.sort(reverse=True)

print('numbers =',numbers)      #[5, 4, 3, 2, 1]


# 리스트에는 서로 다른 자료형의 값들을 묶을수 있지만,
# 정렬하기 위해서는 모든 요소들의 자료형이 같아야한다!!
numbers.append('Hello')

print('numbers =',numbers)      #[5, 4, 3, 2, 1, 'Hello']   #WORNING!

numbers.sort()

#-------------------------------------------------------------------------------------------------------

# 문자열의 비교
# 'Hello' 와 'Hi'를 비교

# 문자열의 정렬
names = ['Kim', 'Park', 'Yoon', 'Lee']

# 리스트의 모든 요소들을 출력
print('names =', names)         # ['Kim', 'Park', 'Yoon', 'Lee']

# sort 메서드를 이용해, 문자열들을 저장하고있는 리스트를 정렬
names.sort()

# 리스트의 모든 요소들을 출력
# 문자열들의 첫번째 문자의 알파벳순으로 정렬됨
print('names =',names)          # ['Kim', 'Lee', 'Park', 'Yoon']

#%%
# range 함수를 이용해 지정한 범위 내의 연속된 정수들을 생성
# range(x, y)
# -> x <= n < y 를 생성!

# range(1, 10)
# -> 1 <= n < 10을 생성! (나열이 아니라 1~9까지를 생성만함)
# 1씩 증가 1인경우 step 생략가능!
# -> 1, 2, 3, 4, 5, 6, 7, 8, 9

# range 함수를 이용해 생성한 정수들을 리스트로 변환
numbers = list(range(1, 10))    

# 리스트의 모든 요소들을 출력
print('numbers =', numbers)         # [1, 2, 3, 4, 5, 6, 7, 8, 9]

#--------------------------------------------------------------------------------

# range 함수를 이용해 생성한 정수들을 리스트로 변환
numbers = list(range(0,10))
# -> 0<= n <y

print('numbers =', numbers)     #[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

# range 함수에서 첫번째 인자가 0이면, 첫번째 인자를 생략할수 있다.
# range(y)
# -> range(0, y)
# -> 0 <= n <y

# range 함수를 이용해 생성한 정수들을 리스트로 변환
numbers = list(range(10))
# -> numbers = list(range(0, 10))과 같음

# 리스트의 모든 요소들을 출력
print('numbers =', numbers)         # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]


# range 함수를 이용해 지정한 범위의 정수들을 생성할때 정수들의 증가 폭을 지정할수 있다!
# 만약 증가 폭이 1인 경우, 생략할수있다.
# range(x, y, step)
# -> x <= n <y 범위 내에서 x에서부터 step씩 증가하는 정수들을 생성

# range(1, 11, 2)
# -> 1 <= n < 11 범위 내에서 2씩 증가하는 정수들을 생성
# -> 1, 3, 5, 7, 9
numbers = list(range(1,11, 2))

# 리스트의 모든 요소들을 출력
print('numbers =',numbers)      #[1, 3, 5, 7, 9]

# range 함수에서 증가 폭, 즉 세번째 인자를 음수로 지정할수있다.
# 이때 생성되는 정수들을 x에서부터 지정한 증가 폭만큼 감소하게된다!

# range(x,y, step)
# -> if step > 0, then x <= n <y
# -> if step < 0, then x >= n >y

# range(10, 0, -1)
# -> 10 >= n >0의 범위내에서 10에서부터 0까지 1씩 감소하는 정수들을 생성
# -> 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
numbers = list(range(10, 0, -1))

# 리스트의 모든 요소들을 출력
print('numbers =',numbers)      #[10, 9, 8, 7, 6, 5, 4, 3, 2, 1]


#%% Q2. 리스트 values에서 중복된 값을 제거

values = [2, 1, 2, 5, 3, 6, 3, 5, 4, 1, 7, 1]

print('values =',values)

# "집합(set)은 중복된 요소를 가지지 않는다!" 는 성질을 이용해 리스트(list)
# 또는 튜플(tuple)에서 중복된 값을 제거할수잇다.

# 1 . set 함수를 이용해 ,주어진 값으로 새로운 집합 자료형의 값을 생성
# 2 . set 함수를 이용해 , 생성한 집합을 list 함수를 이용해 새로운 리스트를 생성
# values_set = set(values)
# values = list(values_set)

# 위에서 두 문장을 이용해 작성했던 기능을 한 문장으로 작성할수 있다.
# set 함수를 이용해 새로운 집합을 생성하고, 그 집합을 list함수를 이용해
# 새로운 리스트로 생성한다.
values = list(set(values))

# values = list(set([2, 1, 2, 5, 3, 6, 3, 5, 4, 1, 7, 1]))
# -> values = list({1, 2, 3, 4, 5, 6, 7})
# -> values = [1, 2, 3, 4, 5, 6, 7]

print('values =',values)