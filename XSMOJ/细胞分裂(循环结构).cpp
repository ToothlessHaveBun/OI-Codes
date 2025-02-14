#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,sum=1,b=0;
	cin >>a;
	while(sum<a){
		sum*=2;
		b++;
	}
	cout <<b;
	return 0;
}


