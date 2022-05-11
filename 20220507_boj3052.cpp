#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[10],r[10];
	int cnt=0,tmp;
	
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<10;i++){
		r[i]=a[i]%42;
	}
	
	
	for(int i=0;i<10;i++){
		for(int j=0;j<i;j++){
			
			if(r[i]==r[j]){				
				cnt++;
				break;
			}
			if(i==j){	
				cnt++;
			}
		}

	}
	
	cout<<10-cnt;

	return 0;
		
}
