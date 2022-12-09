import random

k = {"대한민국" : "서울","멕시코" : "멕시코시티", "스페인" : "마드리드",
     "프랑스" : "파리", "영국" : "런던", "그리스" : "아테네", "독일" : "베를린",
     "일본" : "도쿄", "중국" : "베이징", "러시아" : "모스크바"}

while True :
    print("===============================")
    print("수도 맞추기 게임")
    print("===============================")
    print("1.게임시작")
    print("2.정보 확인")
    print("3.정보 추가")
    print("4.정보 수정")
    print("5.종료")
    a = int(input())

    if a == 1 :
        print("===============================")
        while True :

            random_key = random.choice(list(k.keys()))
            s = input("{}의 수도는? ".format(random_key))

            if k[random_key] == s :
                print("정답!!")

            elif k[random_key] != s:

                if s == "그만" :
                    break

                else :
                    print("아닙니다!!")
            

    elif a == 2 :
        print("===============================")
        print("저장된 나라/수도 리스트")
        print("===============================")

        for nation, capital in k.items() :
            print("{} -> {}".format(nation,capital))
            
        print("===============================")
        print("현재 총 {}개의 수도가 입력되어 있습니다.".format(len(k)))
        print("===============================")

    elif a == 3 :
        print("===============================")
        nation = input("추가할 나라 입력 > ")
        if nation in k.keys() :
            print("{}는 이미 있습니다.".format(nation))
        else :
            capital = input("추가할 수도(도시) 입력 > ")
            k[nation] = capital
    elif a == 4 :
        print("================================")
        four = int(input("수정은 1, 삭제는 2를 입력해주세요 :"))
        if four == 1 :
            nation = input("수정할 나라를 입력하세요 :")
            if nation in k :
                capital = input("수정할 수도(도시) 이름을 입력해주세요 :")
                k[nation] = capital
            else :
                print("등록된 나라가 아닙니다.")
        elif four == 2 :
            nation = input("삭제할 나라를 입력하세요 : ")
            if nation in k :
                del k[nation]
                print("삭제가 완료되었습니다.")
            else :
                print("등록된 나라가 아닙니다.")
            
            
    elif a == 5 :
        break
