#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b[100],c[100],d[100],flag[100];
	cin >>a;
	for(int i=0;i<5;i++){
		cin >>b[i];
	}
	for(int i=0;i<a;i++){
		cin >>c[i];
	}
	for(int i=0;i<a;i++){
		cin >>d[i];
	}
	for(int i=0;i<a;i++){
		if(d[i]==1){
			b[i]=floor(b[i]*1.0/2);
		}
	}
	for(int i=0;i<a;i++){
		
	}
	return 0;
}
