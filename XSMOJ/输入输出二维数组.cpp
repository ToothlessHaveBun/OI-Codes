#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a[100][100],b,c;
	cin >>b>>c;
	for(int i=0;i<b;i++){
		for(int j=0;j<c;j++){
			cin >>a[i][j];
		}
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<c;j++){
			cout <<a[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}


