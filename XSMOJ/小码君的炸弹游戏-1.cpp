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
	int a,b,c[100][100],d,e;
	cin >>a>>b>>d>>e;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			c[i][j]=1;
		}
	}
	for(int i=0;i<a;i++){
		c[i][e-1]=0;
		
	}
	for(int i=0;i<b;i++){
		c[d-1][i]=0;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(c[i][j]==0){
				cout <<i+1<<" "<<j+1;
				cout <<endl;
			}
		}
	} 
	return 0;
}
