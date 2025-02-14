#include <iostream>
using namespace std;
int main(){
	int a,b=0;
	cin >>a;
	if(a==0){
		cout <<"1";
		return 0;
	}
	while(a){
		a/=10;
		b++;
	}
	
	cout <<b;
	return 0;
}

