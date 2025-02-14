#include <iostream>
using namespace std;
int main(){
	int a;
	int sum;
	cin >>a;
	for(sum=1;a>0;a--){
		sum*=a;
	}
	cout <<sum;
	return 0;
}


