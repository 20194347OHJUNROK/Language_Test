# dict 테스트
'''
import numbers


중국집 = {"자장면" : 4000 , "탕수육" : 9000}

# 길이(한쌍기준)
print(len(중국집))
print(중국집["자장면"])

# dict추가
중국집["짬뽕"] = 2500
print(중국집,"\n")

for i in range(len(중국집)):
    print((str)(i+1) + "."+list(중국집.keys())[i])

    total=0
for i in 중국집.values():
    total+=i

avg = total/len(중국집)
print(f'평균 가격 : {avg:.2f}')  

#------------------------------------------------------------------------------------
# dict Test1

# 등급을 입력받아서 학점을 출력해주는 프로그램
# 2입력시 B학점입니다. 출력
# 1~5등급, A~F학점(E학점 제외)

Grade={}
# 0, 1, 2, 3, 4
# 1, 2, 3, 4, 5
# A, B, C, D, F

num=int(input('Enter a Grade : '))

for i in range(5):
    Grade[i+1]=chr(i+65)
    # print(Grade)
    if i==4:
        Grade[i+1]=chr(i+66)
    if num==i+1:
        print(Grade[i+1] + '학점입니다.')
'''
#-----------------------------------------------------------------------------------

# 함수 심화 예제
# 한글을 정수로 바꿔주는 메소드(일공이사 -> 1024)
def changestring(num):
    hangle="공일이삼사오육칠팔구"
    result = ' '
    for i in num:
        # 문자열 연결
       result += str(hangle.index(i))
    return int(result)

num=input('Enter an string >>> ')

print('result = ',changestring(num))