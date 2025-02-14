#include <iostream>
using namespace std;
int main(){
	double a,b=2.0,sum=0,c=0;
	scanf("%lf",&a);
	while(sum<a){
		sum+=b;
		b*=0.98;
		c++;
	}
	printf("%.0lf",c);
	return 0;
}
