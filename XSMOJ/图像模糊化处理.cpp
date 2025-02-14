#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
using namespace std;
int main(){
	l a,b,c[100][100],e[100][100];
	cin >>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >>c[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			e[i][j]=c[i][j];
		}
	}
	for(int i=1;i<a-1;i++){
		for(int j=1;j<b-1;j++){
			c[i][j]=round((e[i+1][j]+e[i-1][j]+e[i][j-1]+e[i][j+1]+e[i][j])*1.0/5);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout <<c[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}
