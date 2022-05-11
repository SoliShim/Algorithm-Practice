#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[8],asc=0,des=0;
	
	for(int i=0;i<8;i++){
			cin>>a[i];		
	}
	
	for(int i=0;i<8;i++){
			if(a[i]==i+1){
				asc++;
			}
			if(a[i]==8-i){
				des++;
			}
	}
	
	if(asc==8){
		cout<<"ascending";
	}
	else if(des==8){
		cout<<"descending";
	}
	else{
		cout<<"mixed";
	}
	


	return 0;
		
}