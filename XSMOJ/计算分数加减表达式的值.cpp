#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a;
	double sum1,sum2;
	scanf("%d",&a);
	for(int i=1;i<=a;i+=2){
		sum1+=1*1.0/i;
	}
	for(int i=2;i<=a;i+=2){
		sum2+=1*1.0/i;
	}
	printf("%.4lf",sum1-sum2);
	return 0;
}
