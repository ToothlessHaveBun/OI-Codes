#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b,c[10000],d[10000],flag1=0,flag2=0;
	cin >>a>>b;
	for(int i=1;i<=a;i++){
		cin >>c[i];
	}
	for(int i=1;i<=b;i++){
		cin >>d[i];
	}
	for(int i=1;i<a;i++){
		if(c[i]>=40 && i==d[i]){
			flag1=1;
			flag2=1;
			cout <<i<<" ";
		}
		if(c[i]>=40 && i!=d[i]){
			flag2=1;
		}
	}
	if(flag1==0 && flag2!=0){
		cout <<"luck";
	}
	if(flag2==0){
		cout <<"quiet";
	}
	return 0;
}
