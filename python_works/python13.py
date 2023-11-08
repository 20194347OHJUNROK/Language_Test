# Q1.
 
#(1) max함수와 min함수를 이용해, 리스트의 요소들중에서 최댓값과 최솟값을 확인
'''
from audioop import minmax
from codecs import utf_7_encode
numbers=[]

length=10
for i in range(length):
   num=int(input('Enter an integer:'))
   numbers.append(num)

print()
print('Maximum value =',max(numbers))
print('Minimum value =',min(numbers))
print()

#(2)
numbers=[]


for i in range(length):
    num=int(input('Enter an integer:'))
    numbers.append(num)

maximum=minimum=numbers[0]

for item in numbers:
    if item>maximum:
        maximum=item
    if item<minimum:
        minimum=item

print()
print('Maximum value =',maximum)
print('Minimum value =',minimum)
print()

#(3)
# sort 매서드 또는 sorted 함수를 이용해, 리스트를 정렬해서 최댓값과 최솟값을 확인
# 오름차순으로 정렬하게되면 가장 첫번째의 요소가 최솟값이 되고
# 가장 마지막번째의 요소가 최댓값이 된다.

numbers=[]


for i in range(length):
    num=int(input('Enter an integer:'))
    numbers.append(num)

# sort 메서드를 이용해 리스트 numbers의 요소들을 오름차순으로 정렬
numbers.sort()

# sorted 메서드를 이용해 리스트 numbers의 요소들을 오름차순으로 정렬
# → sorted_numbers = sorted(numbers)
print()
print('Maximum value =',numbers[-1])
print('Minimum value =',numbers[0])
'''
#---------------------------------------------------------------------------------------------
# Q2.

#(1) count 메서드를 이용
numbers = [2,3,1,3,1,3,1,4,2,3,1,3]

for i in range(1,5):
    print(i,end=' ')
    for i in range(numbers.count(i)):
        print('*',end='')
    print()
print()



#(2) 문자열의 곱
for i in range(1,5):
    # '*' 문자열에 리스트 numbers의 요소들 중에서 변수 i의 개수를 곱해서,
    # 그 개수만큼 '*'로 된 문자열을 생성
    print(i,'*'*numbers.count(i))
print()

#-----------------------------------------------------------------------------------------------

# Q3.

# 사용자가 입력한 정수들을 저장할 리스트
numbers = list()

# for 구문과 range함수를 이용해, 최대 30개의 정수들을 사용자에게 입력
for i in range(30):
    num = int(input('Enter an integer :'))

    # 사용자가 입력한 정수가, 즉 변수 num이 0이면 반복문 종료
    if num ==0: break

    # 사용자가 입력한 정수가 0이 아니면, 리스트 numbers에 추가
    numbers.append(num)

# 평균 계산 = (사용자가 입력한 정수들의 합계)/(사용자가 입력한 정수들의 개수)
# → 사용자가 0을 입력하면 정수들의 개수는 30이 아닐수도있기때문에 리스트를 선언하여
# → 리스트의 길이를 이용
average = sum(numbers)/len(numbers)

# 평균보다 더 큰 정수들의 백분율
# → (평균보다 더 큰 정수들의 개수)/(사용자가 입력한 정수들의 개수)*100


# 평균보다 더 큰 정수들의 개수
above_average=0

# for 구문을 이용해, 리스트 numbers의 요소들을 차례대로 확인
for item in numbers:
    if item>average:
        above_average+=1

# 평균보다 더큰 정수들의 백분율 계산
percent = above_average/len(numbers)*100

print('AVERAGE : ',average)
print(f'Percentage of numbers above the average: {int(percent)}%')