# Q1. 1 부터 20까지의 정수들 중에서 짝수들을 출력한다.
'''
for i in range(2,21,2):
    print('i = ',i)
print()

for i in range(1,21):
    if i%2==0:
        print('i = ',i)
print()
'''
# Q2. 1부터 50까지의 정수들 중에서 5의 배수를 출력한다.

#(1)
from audioop import minmax
from tkinter.tix import MAX


for i in range(1,51):
    if i%5==0:
        print('i= ',i)
print()

#(2)
for i in range(5,51,5):
    print('i = ',i)
print()

#-----------------------------------------------------------------------------------

# Q3. 기타 제어문 실습(break제어문, continue제어문)

#(1)
# 1~100까지 중 3과 5의 공배수만 출력하기
for i in range(1,101):
    if (i%3==0)and(i%5==0):
        print(i,end=' ')
print()

#(2)
#(continue 사용)
for i in range(1,101):
    if (i%3) or (i%5):
        continue
    print(i,end=' ')
    print()
#-------------------------------------------------------------------------------

# Q4. A ~ F 까지 중 C 제외하고 출력
for i in range(5):
    if i>1:
        i+=1
    print('i = ',chr(65+i))
print()
# Q5. aBcDeFgHiJkLmNoPqRsTuVwXyZ 출력
Msg = 0

for i in range(26):
    if i%2:
        msg = i+65
    else:
        msg = i+97
    print(chr(msg),end='')
print()

#------------------------------------------------------------------------------------
# sum 함수 : 주어진 값들의 합계를 계산
# sum(1, 2, 3, 4, 5, ......, 98, 99, 100)
# → sum(range(1,101))

# 출력
print('The sum of the integers between 1 and 100 is',sum(range(1,101)))
print()
#--------------------------------------------------------------------------------------

# Q6. 사용자에게 정수 N1과 N2를 입력받는다.
#     정수 N1과 N2사이에 있는 정수들의 합계를 구해서 출력한다.

#(1)
n1,n2=map(int,input('Enter two integers: ').split())
print()

total=0

if(n1>n2):
    for i in range(n2,n1+1):
        total+=i
elif(n1<n2):
    for i in range(n1,n2+1):
        total+=i

print('result =',total)
print()
#---------------------------------------------------------------------------------------

#(2)
if n1<n2:
    result = sum(range(n1,n2+1))
else:
    result = sum(range(n2,n1+1))

#출력
print('result = ',result)
print()
#----------------------------------------------------------------------------------------

#(3)
# 조건문을 이용해 변수 n1과 n2중에서 큰 값과 작은 값을 구분
max=n1
min=n2

if n1<n2:
    max,min=n2,n1

#Sum함수이용
result = sum(range(min,max+1))

print('result =',result)
print()
#---------------------------------------------------------------------------------------
#(4)
# max 함수 : 주어진 값들 중에서 가장 큰 값을 구해주는 함수
# min 함수 : 주어진 값들 중에서 가장 작은 값을 구해주는 함수
#---------------------------------------------------------------------------------------

#(5) step의 증가폭으로 합계를 구할수있다.

# n1, n2 = 4, 8
# → n= 4, 5, 6, 7, 8
# → 4 <= n < 9
# → range(4,9,1)
# → range(n1, n2+1, 1)

# n1, n2 = 6, 3
# → n = 6, 5, 4, 3
# → 6 >= n > 2
# → range(6, 2, -1)
# → range(n1, n2-1, -1)
# → range(n1, n2 + -1, -1)와 같음 


# range 함수의 세번째 인자로 저장할 변수
step = 1
# 변수 n1이 n2보다 크면, 변수 step은 -1이 되어야한다.
if n1>n2:
    step = -1

print('result =',sum(range(n1,n2+step,step)))

