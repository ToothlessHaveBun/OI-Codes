#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
int a,b[100000],c[100000],max1=-123456,d[100000]; 
using namespace std;
int main(){
	cin >>a;
	for(int i=1;i<=a;i++){
		cin >>b[i];
	}
	for(int i=1;i<=a;i++){
		c[b[i]]++;
	}
	for(int i=0;i<=100;i++){
		if(c[i]>max1){
			max1=c[i];
		}
	}
	for(int i=0;i<=100;i++){
		if(c[i]==max1){
			d[i]=i;
		}
	}
	for(int i=1;i<=a;i++){
		for(int j=0;j<=100;j++){
			if(d[j]==b[i]){
				cout <<d[j]<<" "<<max1;
			}
		}
	}
	return 0;
}
