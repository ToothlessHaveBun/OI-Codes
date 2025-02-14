#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b,c[1000];
	cin >>a>>b;
	for(int i=0;i<a;i++){
		cin >>c[i];
	}
	for(int i=b-1;i>=0;i--){
		cout <<c[i]<<" ";
	}
	for(int i=b;i<a;i++){
		cout <<c[i]<<" ";
	}
	return 0;
}
