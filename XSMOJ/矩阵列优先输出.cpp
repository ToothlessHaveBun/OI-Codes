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
	l a,b,c[100][100];
	cin >>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >>c[i][j];
		}
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<a;j++){
			cout <<c[j][i]<<" ";
		}
		cout <<endl;
	} 
	return 0;
}
