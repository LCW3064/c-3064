#
# 20193064 이창우
# LAB 8-3 파티 동시 참석자 알아내기, 210쪽
#

partyA = set(["Park","Kim","Lee"])
partyB = set(["Park","Choi"])

print("2개의 파티에 모두 참석한 사람은 다음과 같습니다. ")
print(partyA.intersection(partyB)) # partyA & partyB와 같다.
print('프로그램을 종료합니다.')
