#include <iostream>
using namespace std;
int main(){
	int a,i,j;
	cin >>a;
	for(i=1;i<=a;i++){
		cout <<i*i;
		break;
	}
	for(j=i+1;j<=a;j++){
		cout <<","<<j*j;
	}
	return 0;
}
