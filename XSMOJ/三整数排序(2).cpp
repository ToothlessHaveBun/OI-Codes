#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b,c,n;
	cin >>a>>b>>c;
	if(a>b){
		n=a;
		a=b;
		b=n;
	}
	if(b>c){
		n=b;
		b=c;
		c=n;
	}
	if(a>b){
		n=a;
		a=b;
		b=n;
	}
	cout <<a<<" "<<b<<" "<<c;
	return 0;
}


