#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a;
	double sum=1;
	long long tem=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			tem*=j;
		}
		sum+=1*1.0/tem;
		tem=1;
	}
	printf("%.10lf",sum);
	return 0;
}
