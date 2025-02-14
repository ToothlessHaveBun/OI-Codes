#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b,c=0,d[100][100];
	cin >>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >>d[i][j];
			if(i==0 || j==0 || i==(a-1) || j==(b-1)){
				c+=d[i][j];
			}
		}
	}
	cout <<c;
	return 0;
}


