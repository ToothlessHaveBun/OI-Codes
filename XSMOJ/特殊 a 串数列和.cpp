#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int sum1=0,sum2=0;
	int a,n;
	scanf("%d%d",&n,&a);
	for(int i=0;i<n;i++){
		sum1=sum1*10+a;
		sum2+=sum1;
	}
	printf("%d",sum2);
	return 0;
}
