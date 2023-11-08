# Q1.
# 사용자에게 정수 n1과 n2를 입력받아 조건부 표현식을 이용해
# 큰값에서 작은값을 뺀 값을 구해 출력한다.

n1,n2 = map(int , input('Enter two integers : ').split())

result = n1-n2 if n1>n2 else n2-n1
print('max - min = ',result)

#------------------------------------------------------------------------

# Q2.
# 사용자에게 정수를 입력받아 조건부표현식을 이용해
#  그 정수가 양수인지 음수인지 0인지 출력

num = int(input('Enter an integer : '))

result = 'is positive.'if num>0 else 'is negative.'if num<0 else 'is zero.'

print(num , result)