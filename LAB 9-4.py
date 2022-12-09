#
# 20193064 이창우
# LAB 9-4 1회용 패스워드를 만들어 보자, 231쪽
#

import random
import string

n_digits = int(input("몇 자리의 비밀번호를 원하십니까? "))

a = string.ascii_lowercase
b = string.ascii_uppercase
otp = ''

for i in range(n_digits):
    x = random.randint(0,2)
    
    if x == 0:
        otp += str(random.randint(0, 9))
    elif x == 1:
        otp += otp.join(random.choice(a))
    else :
        otp += otp.join(random.choice(b))


print(otp)
