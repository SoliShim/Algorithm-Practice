#include <iostream>
#include <string>
using namespace std;


int Rev(int x){
	
	int r=0;
		
	r+=x/100;
	x=x%100;
	r+=(x/10)*10;
	x=x%10;
	r+=x*100;
		
	return r;
}

int main(){
	
	int a,b;
	int ar,br;
	//375
	
	
	cin>>a>>b;
	
	ar=Rev(a);
	br=Rev(b);
	
	
	if(ar>br){
		cout<<ar;
	}
	else{
		cout<<br;
	}
	return 0;
}