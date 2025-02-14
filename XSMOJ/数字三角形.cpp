#include <iostream>
using namespace std;
int main(){
	int a,b=1;
	cin >>a;
	for(int j=1;j<=a;j++){
		for(int i=1;i<=j;i++){
		cout <<b<<" ";
		b++;
		if(b>=10){
			b=0;
		}
	}
	cout <<endl;
	}
	return 0;
}
