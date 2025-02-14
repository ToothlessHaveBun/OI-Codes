#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	double a,b;
	int c;
	scanf("%lf%lf%d",&a,&b,&c);
	printf("height:%.2lfm,weight:%.1lfkg,age:%dyears.",a,b,c);
	return 0;
}
