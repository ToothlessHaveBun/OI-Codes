#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b=1,sum=0;
	cin >>a;
	while(a>b){
		sum+=b*b;
		a-=b;
		b++;
	}
	sum+=b*a;
	cout <<sum;
	return 0;
}


