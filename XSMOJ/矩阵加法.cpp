#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a[100][100],b[100][100],c,d,e[100][100]={};
	cin >>c>>d;
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			cin >>a[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			cin >>b[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			e[i][j]+=a[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			e[i][j]+=b[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			cout <<e[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}


