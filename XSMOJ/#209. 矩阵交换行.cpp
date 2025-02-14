#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a[100][100],b[100][100],c,d;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >>a[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			b[i][j]=a[i][j];
		}
	}
	cin >>c>>d;
	for(int i=0;i<5;i++){
		a[c-1][i]=a[d-1][i];
	}
	for(int i=0;i<5;i++){
		a[d-1][i]=b[c-1][i];
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout <<a[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}


