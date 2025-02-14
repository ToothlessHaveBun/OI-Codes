#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
long long a,b,c[1000000],d[1000000],e=0;
using namespace std;
int main(){
	cin >>a>>b;
	for(int i=0;i<a;i++){
		cin >>c[i];
	}
	for(int i=0;i<a;i++){
		cin >>d[i];
	}
	for(int i=0;i<a;i++){
		e+=(d[i]-c[i]);
	}
	if(e<=0){
		cout <<0;
	}
	if(e>0){
		cout <<e*b;
	}
	return 0;
}
