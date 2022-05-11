#1546번 문제

'''
N=int(input())
score=list(input().split()) #값을 여러개 입력받아 스트링로 리스트에 저장
score=list(map(int, score)) #스트링을 인티저로 변환

M=score[0]
for i in range(N): #최댓값 구하기
    if(score[i]>M):
        M=score[i]

summ=0
for i in range(N):
    score[i]=score[i]/M*100
    summ+=score[i]

print(summ/N)
'''

#2438번 문제

N=input()
print(N)
for i in range(N):
    for j in range(i):
        print("*")