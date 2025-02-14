#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	long long a;
	scanf("%lld",&a);
	while(a){
		printf("%lld ",a%10);
		a/=10;
	}
	return 0;
}
