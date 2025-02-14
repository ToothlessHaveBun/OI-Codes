#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a[1000];
	int b;
	cin >>b;
	for(int i=0;i<b;i++){
		cin >>a[i];
	}
	for(int i=0;i<b;i++){
		if(a[i]<=10){
			cout <<i+1<<" ";
		}
	}
	cout <<endl;
	for(int i=0;i<b;i++){
		if(a[i]>10){
			cout <<i+1<<" ";
		}
	}
	return 0;
}

	
