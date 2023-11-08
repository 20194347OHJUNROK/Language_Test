#Q1.
numbers = [4, 17, 32, 3, 8, 13, 41, 27, 16, 1]

#(1)
for i in range(len(numbers)):
    print(numbers[i]+5, end='  ')

print()
#(2)
for index, item in enumerate(numbers):
    print(item+5, end='  ')
print()
#(3)
for item in numbers:
    print(item+5, end='  ')
print()
#------------------------------------------------------------------------------------------------

#Q2.
scores = [88, 92, 76, 64, 80, 96, 84, 72, 68, 100]

#(1)
for i in range(len(scores)):
    if scores[i] > 80:
        print(f'scores[{i}] =', {scores[i]}, end=' |')

print()

#(2)
for index, item in enumerate(scores):
    if item > 80:
        print(f'scores[{index}] =', {item}, end=' |')

print()


#(3)
for item in scores:
    if item > 80:
        index = scores.index(item)
        print(f'scores[{index}] =', {item}, end=' |')

print()
#----------------------------------------------------------------------------------------------

#Q3.
numbers = [4, 17, 32, 3, 8, 13, 41, 27, 16, 1]

#(1)
for i in range(len(numbers)):
    if i % 2:
        print(numbers[i], end=' ')
print()

#(2)
for index, item in enumerate(numbers):
    if index % 2:
        print(item, end=' ')

print()

#(3)
for item in numbers[1::2]:
    print(item, end=' ')
print('\n')

#--------------------------------------------------------------------------------------------

#Q4.
favorites = ['Coffee', 'Juice', 'Coke', 'Milk', 'Tea']

#(1)
for index, item in enumerate(favorites):
    if item == 'Coffee' or item == 'Tea':
        print(f'{index}.{item}')
print()

#(2)
for i in range(len(favorites)):
    if favorites[i] == 'Coffee' or favorites[i] == 'Tea':
        print(f'{i}.{item}')
print()

#(3)
# in 연산자와 index 메서드를 이용해, 리스트의 요소들 중에서 'Coffee' 와 'Tea'출력

if 'Coffee' in favorites:
    index = favorites.index('Coffee')
    print(index, 'Coffee')

if 'Tea' in favorites:
    index = favorites.index('Tea')
    print(index, 'Tea')
print()

#--------------------------------------------------------------------------------------------------------

# Q5.
favorites = ['Coffee', 'Juice', 'Coke', 'Milk', 'Tea']

#(1)
for i in range(len(favorites)):
    if favorites[i] == 'Coke':
        print('Soft Drink')
    else:
        print(favorites[i])
print()

#(2)
for item in favorites:
    if item == 'Coke':
        print('Soft Drink')
    else:
        print(item)
print()
#---------------------------------------------------------------------------------------------------------------

# Q6.

scores = [88, 92, 76, 64, 86, 96]
# sum=0

# #(1)
# for i in range(len(scores)):
#     sum+=scores[i]

# average=sum/len(scores)
# print('Sum = ',sum)
# print(f'average = {average:.2f}')


#(2) Sum함수를 이용해 리스트의 모든 요소들의 합계를 계산
result = sum(scores)

average=result/len(scores)

print('Sum = ',result)
print(f'average = {average:.2f}')


#-----------------------------------------------------------------------------------------------------------------------

# Q7.
#(1)
# count = 0
# sum=0
# while(count!=10):
#     num=int(input('Enter an integer :'))
#     sum+=num
#     count+=1

# average=sum/count

# print('Sum = ',sum)
# print(f'average = {average:.2f}')


#(2) 사용자가 입력한 정수들을 리스트에 저장하여 출력
list=[]
length = 10
for i in range(length):
    num=int(input('Enter an integer :'))
    list.append(num)

result=sum(list)
average=result/length

print('Sum = ',result)
print(f'average = {average:.1f}')