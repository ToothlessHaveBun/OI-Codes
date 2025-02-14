#include <iostream>
using namespace std;
int main(){
	int a,b=0,c=0,e=2;
	cin >>a;
	for(int i=2;i<=a;i++){
		if(a%i!=0){
			b++;
		}
	}
	if(b==a-2){
		cout <<"yes";
	}
	else{
		cout <<"no";
	} 
	return 0;
}

