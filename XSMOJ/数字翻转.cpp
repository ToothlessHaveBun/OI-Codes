#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b,c=0,d=0;
	scanf("%d%d",&a,&b);
	while(a){
		c=c*10+a%10;
		a/=10;
	}
	while(b){
		d=d*10+b%10;
		b/=10;
	}
	if(c>d){
		printf("%d",c);
	}
	if(d>c){
		printf("%d",d);
	}
	return 0;
}
