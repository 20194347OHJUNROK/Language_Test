#listTEST

# Q1. 1~100까지 값을 넣고 출력
from re import I


datalist = [0]*100

for i in range(len(datalist)):
    datalist[i]=i+1
print(datalist)
print()


# Q2. 1~100까지 중 짝수만 넣고 출력
datalist = [0]*50

for i in range(len(datalist)):
    datalist[i]=(i+1)*2

print(datalist)
print()
        


# Q3. A~F까지 넣고 출력
datalist =['']*6

for i in range(len(datalist)):
    datalist[i]=chr(i+65)

print(datalist)
print()



# Q4. A~F까지 중 C제외하고 출력
datalist = ['']*5
temp = 0
for i in range(len(datalist)):
    temp = i
    if i>1:
        temp+=1
    datalist[i]=chr(65+temp)

print(datalist)
print()



# Q5. "ABC" 에서 B를 Z로 변경하기
strlist = "ABC"
print(strlist[0])
# 문자열 리스트 → " " 또는 ' '로 문자들을 묶어서 사용!!!
strlist = strlist.replace("B","Z")

print(strlist)



# Q6. 자연수를 한글로 변경하기
# 입력 예) 1024
# 출력 예) 일공이사

#입력
num=int(input('자연수 입력 :'))

#문자열 리스트 사용
hangle = '공일이삼사오육칠팔구'

# 다음 반복을 위해 변수 선언
result = ''

while num!=0:
    result=hangle[num%10]+result
    num = num//10

print(result)


