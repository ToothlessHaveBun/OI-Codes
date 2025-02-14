#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	double a,sum=0;
	int b=0;
	scanf("%lf",&a);
	while(sum<=a){
		b++;
		sum+=1*1.0/b;
	}
	printf("%d",b);
	return 0;
}
