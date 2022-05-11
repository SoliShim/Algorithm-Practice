//10809 알파벳 찾기

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	
	char S[100]; //입력하는 문자열
	for(int i=0;i<100;i++){ //초기화
		S[i]=' ';
	}
	
	int ary[26]; //알파벳 카운팅
	for(int i=0;i<26;i++) //초기화
		ary[i]=-1;
	
	scanf("%s",S); //입력
	
	for(int i=0;i<100;i++){
		if(ary[(int)S[i]-97]==-1){ //알파벳에  해당하는 것이 처음 나온 것인가?
			ary[(int)S[i]-97]=i; //맞으면 해당 주소를 저장
		}
	}
	
	for(int i=0;i<26;i++){
		printf("%d ",ary[i]);
	}
	return 0;
}	