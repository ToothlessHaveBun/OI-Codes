#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		int c=i;
		while(c){
			if(c%10==2){
				sum++;
			}
			c/=10;
		}
	}
	printf("%d",sum);
	return 0;
}
