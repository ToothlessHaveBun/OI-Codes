#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
int main(){
	c a[1000],b[1000];
	l a1[1000],b1[1000],sum1=1,sum2=1;
	cin >>a>>b;
	for(int i=0;i<strlen(a);i++){
		a1[i]=a[i]-64;
	}
	for(int i=0;i<strlen(b);i++){
		b1[i]=b[i]-64;
	}
	for(int i=0;i<strlen(a);i++){
		sum1*=a1[i];
	}
	for(int i=0;i<strlen(b);i++){
		sum2*=b1[i];
	}
	if(sum1%47==sum2%47){
		cout <<"GO";
	}
	else{
		cout <<"STAY";
	}
	return 0;
}
