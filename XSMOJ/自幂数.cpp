#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	long long a,b=0,c[10000],d,sum=0;
	scanf("%lld",&a);
	d=a;
	while(d){
		c[b]=d%10;
		b++;
		d/=10;
	} 
	for(int i=0;i<b;i++){
		sum+=pow(c[i],b);
	}
	if(sum==a){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
