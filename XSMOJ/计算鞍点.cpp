#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a[100][100],max,min,k=0,m=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >>a[i][j];
		}
	}
	max=a[0][0];
	min=a[0][0];
	for(int i=0;i<5;i++){
		k=0;
		m=0;
		max=a[i][0];
		for(int j=0;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
				k=j;
			}
		}
		min=a[0][k];
		for(int j=0;j<5;j++){
			if(a[j][k]<min){
				min=a[j][k];
				m=j;
			}
		}
		if(i==m){
			cout <<m+1<<" "<<k+1<<" "<<a[m][k];
			return 0;
		}
		
	}
	cout <<"not found";
	return 0;
}
