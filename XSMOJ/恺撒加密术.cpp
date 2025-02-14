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
	c a[100000];
	l b;
	cin >>a;
	cin >>b;
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='a' && a[i]<='z'-b) || (a[i]>='A' && a[i]<='Z'-b)){
			a[i]+=b;
		}
		else if((a[i]>='z'-b+1 && a[i]<='z') || (a[i]>='Z'-b+1 && a[i]<='Z')){
			a[i]=a[i]-26+b;
		}
	}
	cout <<a;
	return 0;
}
