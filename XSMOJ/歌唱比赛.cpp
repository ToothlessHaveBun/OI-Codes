#include <iostream>
using namespace std;
int main(){
	int n,m;
	int max=-100000,min=100000;
	int a[100];
	int b=0;
	cin >>n;
	cin >>m;
	for(int i=0;i<n;i++){
		cin >>a[i];
		if(a[i]>=max){
			max=a[i];
		}
		if(a[i]<=min){
			min=a[i];
		}
	}
	for(int i=0;i>n;i++){
		b+=a[i];
	}
	cout <<b*1.0/(m-2);
	return 0;
}

