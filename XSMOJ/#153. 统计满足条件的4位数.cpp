#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a[10000],b,c,d,e,f,g=0;
	cin >>b;
	for(int i=0;i<b;i++){
		cin >>a[i];
	}
	for(int i=0;i<b;i++){
		c=a[i]%10;
		a[i]/=10;
		d=a[i]%10;
		a[i]/=10;
		e=a[i]%10;
		a[i]/=10;
		f=a[i]%10;
		a[i]/=10;
		if((c-d-e-f)>0){
			g++;
		}
	}
	cout <<g;
	return 0;
}


