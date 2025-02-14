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
	c a[100][100];
	l b;
	cin >>b;
	for(int i=0;i<b;i++){
		cin >>a[i];
	}
	for(int i=0;i<b;i++){
		for(int j=1;j<strlen(a[i]);j++){
			if(a[i][j]>='A' && a[i][j]<='Z'){
				a[i][j]+=32;
			}
		}
	}
	for(int i=0;i<b;i++){
		if(a[i][0]>='a' && a[i][0]<='z'){
			a[i][0]-=32;
		}
	}
	for(int i=0;i<b;i++){
		cout <<a[i]<<endl;
	}
	return 0;
}
