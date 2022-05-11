//2577 숫자의 개수


#include <iostream>
using namespace std;


int pow(int x){ //거듭제곱
		int result=1;

		for(int i=0;i<x;i++){
			result*=10;
		}

		return result;
}
	
int digitFind(int x){
	int cnt=0;
	for(int i=9;i>0;i--){
		
		if(x/pow(i)==0){
			cnt++;
			//cout<<x/pow(i)<<endl;
		}
		else{
			break;
		}
	} 
	return 9-cnt+1;
}	
	
	
int main(){ 
	int A,B,C,mul;
	int digit;
	int tmp=0;	
	int ary[10]; //0으로 초기화
	for(int i=0;i<10;i++)
		ary[i]=0;
	cin>>A>>B>>C; //A,B,C 입력
	mul=A*B*C; // 곱한 값

	
	digit=digitFind(mul);
	
	//cout<<digit<<endl<<endl;
	
	for(int i=digit;i>0;i--){
		tmp=mul/pow(i-1);
		ary[tmp]++;
		mul=mul-(tmp*pow(i-1));
		//cout<<pow(i-1)<<"\t"<<tmp<<"\t"<<mul<<endl;
		
	}
	
	
	for(int i=0;i<10;i++)						
	{

		cout<<ary[i]<<endl;
	}
	
	return	0;
	
}
