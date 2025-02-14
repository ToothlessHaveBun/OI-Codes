#include <iostream>
using namespace std;
int main(){
	int n;
	int max=-100000,min=100000;
	int a[100000];
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>a[i];
		if(a[i]>=max){
			max=a[i];
		}
		if(a[i]<=min){
			min=a[i];
		}
	}
	cout <<min<<" "<<max;
	return 0;
}

