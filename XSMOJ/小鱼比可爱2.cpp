#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b[1000],c[1000]={0,0,0};
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>b[i];
	}
	for(int i=0;i<a;i++){
		for(int j=i;j<a;j++){
			if(b[i]>b[j]){
				c[i]++;
			}
		}
	}
	for(int i=0;i<a;i++){
		cout <<c[i]<<" ";
	}
	return 0;
}


