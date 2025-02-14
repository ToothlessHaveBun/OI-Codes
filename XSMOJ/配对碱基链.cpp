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
	c a[10000];
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='A'){
			a[i]='T';
		}
		else if(a[i]=='T'){
			a[i]='A';
		}
		else if(a[i]=='G'){
			a[i]='C';
		}
		else if(a[i]=='C'){
			a[i]='G';
		}
	}
	cout <<a;
	return 0;
}
