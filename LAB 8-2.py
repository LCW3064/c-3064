#
# 20193064 이창우
# LAB 8-2 영한 사전을 만들어 보자, 205쪽
#

print("사전 프로그램 시작... 종료는  q를 입력")
dictionary = {}

while True:
    st = input('$ ')
    command = st[0]
    if  command  == '<':
        st = st[1:]
        inputStr = st.split(':')    # :을 기준으로 문자열을 나눈다.
        if len(inputStr) < 2 :
            print('입력 오류가 발생했습니다.')
        else:
            dictionary[inputStr[0].strip()] = inputStr[1].strip()
    elif command == '>':
        st = st[1:]
        inputStr = st.strip()       # strip()은 앞뒤에 있는 공백을 정리한다.
        if inputStr in dictionary:
            print(dictionary[inputStr])
        else :
            print('{}가 사전에없습니다.'.format(inputStr))
    elif command == 'q':
        break
    else  :
        print('입력 오류가 발생했습니다.')
print('사전 프로그램을 종료합니다.')
            
