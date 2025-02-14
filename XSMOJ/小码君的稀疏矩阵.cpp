#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a[100][100],b,c,d=0;
	cin >>b>>c;
	for(int i=0;i<b;i++){
		for(int j=0;j<c;j++){
			cin >>a[i][j];
		}
	}
	for(int i=0;i<b;i++){
		for(int j=b-1;j>=0;j--){
			if(a[i][j]!=0){
				cout <<i+1<<" "<<j+1<<" "<<a[i][j];
				d++;
				cout <<endl;
			}
		}
		if(d==0){
			cout <<"empty"<<endl;
		}
		d=0;
	} 
	return 0;
}


