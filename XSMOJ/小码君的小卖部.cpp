#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	long long a,b,c,d,sum=0;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	for(int i=1;i<=a;i++){
		sum+=b;
		if(i%c==0){
			b+=d;
		}
		
	}
	printf("%lld",sum);
	return 0;
}
