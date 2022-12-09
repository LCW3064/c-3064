#
# 20193064 이창우
# LAB 3-3 몸무게와 키를 입력받아 BMI 계산하기, 77쪽
#
weight = float(input('몸무게를 kg 단위로 입력하시오: '))
height = float(input('키를 미터 단위로 입력하시오: '))
bmi = (weight / (height ** 2))# bmi 공식
print('당신의 BMI=', bmi)# 결과값 출력
