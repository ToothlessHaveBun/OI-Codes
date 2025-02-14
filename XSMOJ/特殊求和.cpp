#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b,sum=0,flag=0;
	cin >>a;
	for(int i=1;i<=a;i++){
		b=i;
		while(b){
			if(b%10==7){
				sum+=b;
				flag=1;
				break;
			}
			b/=10;
		}
		if(flag==1){
				continue;
			}
			else{
				if(i/7==0){
					sum+=i;
				} 
			}
			flag=0;
	}
	cout <<sum;
	return 0;
}


