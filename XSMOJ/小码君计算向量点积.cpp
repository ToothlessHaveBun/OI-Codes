#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b[3][10000],sum=0;
	cin >>a;
	for(int i=0;i<2;i++){
		for(int j=0;j<a;j++){
			cin >>b[i][j]; 
		}
	}
	for(int i=0;i<a;i++){
		sum+=b[0][i]*b[1][i];
	}
	cout <<sum;
	return 0;
}
