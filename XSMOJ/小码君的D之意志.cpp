#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
int main(){
	c a[1000];
	l cnt=0;
	cin >>a;
	l tem=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='D'){
			tem=1;
		}
		if(a[i]==','){
			cnt+=tem;
			tem=0;
		}
	}
	cnt+=tem;
	cout <<cnt;
	return 0;
}
