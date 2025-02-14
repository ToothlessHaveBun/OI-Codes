#include <iostream>
using namespace std;
int main(){
	int a,i;
	cin >>a;
	for(i=1;i<=a;i+=2){
		cout <<i<<" ";
	}
	cout <<endl;
	for(i=a;i>=1;i-=3){
		cout <<i<<" ";
	}
	return 0;
}

