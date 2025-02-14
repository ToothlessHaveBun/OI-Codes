#include <iostream>
using namespace std;
int main(){
	int a,flag1=1,flag2=1;
	cin >>a;
	for(int i=2;i<=a-2;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag1=0;
				break;	
			}
		}
		for(int k=2;k<a-i;k++){
		if((a-i)%k==0){
			flag2=0;
			break;
		}
	}
	if(flag1==1 && flag2==1){
			cout <<a<<"="<<i<<"+"<<a-i;
			break; 
		}
	}
	
	return 0;
}
