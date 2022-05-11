//OX	문제

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;//배열 길이 
	int con=1;//연속 카운팅
	cin>>num;
	
	//이중 배열 동적 할당
	
	char **ary= new char*[num]; //동적할당 배열
	for(int i=0;i<num;i++){
		ary[i]=new char[80];
	}
	
	int *score = new int[num]; // 스코어 저장
	for(int i=0;i<num;i++){
		score[i]=0;
	}
	
	
	cin.ignore();// \n입력받지 않기 위한 메서드
	for(int i=0;i<num;i++){ //입력 받기
		cin.getline(ary[i],80);
	}
	
	
	for(int i=0; i<num ;i++){ //점수 계산
		for(int j=0; j<80; j++){
			
			if(ary[i][j]=='O'){ //O일 때
				score[i]+=con;
				con++;
			}
			else if(ary[i][j]=='X'){ //X일 때
				con=1;
			}
			else{
				con=1;
				break;
			}		
			
		}
	}
	
	
	
	for(int i=0;i<num;i++){
		cout<<score[i]<<endl;
	}
	
	
	delete[] ary;
}
}