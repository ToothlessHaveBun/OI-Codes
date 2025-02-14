#include <iostream>
using namespace std;
int main(){
	int a,b=0,c;
	cin >>a;
	c=a;
	while(a){
		a/=10;
		b++;
	}
	cout <<b<<endl;
	while(c){
		cout <<c%10<<endl;
		c/=10;
	}
	return 0;
}

