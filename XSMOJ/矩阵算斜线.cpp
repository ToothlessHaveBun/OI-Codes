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
	l a,b,c[100][100],sum=0;
	cin >>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin >>c[i][j];
		}
	}
	if(b==1){
		for(int i=a-1;i>=0;i--){
			sum+=c[i][a-i-1];
		}
	}
	if(b==0){
		for(int i=0;i<a;i++){
			sum+=c[i][i];
		}
	}
	cout <<sum;
	return 0;
}
