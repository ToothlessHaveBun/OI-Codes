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
	char a[100][100];
	l b=0,c=0;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cin >>a[i][j];
		}
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			if(a[i][j]=='o'){
				b++;
			}
			if(a[i][j]=='*'){
				c++;
			}
		}
	}
	if(b>c){
		cout <<"qin"<<" "<<b-c;
	}
	if(b==c){
		cout <<"draw";
	}
	if(b<c){
		cout <<"luo"<<" "<<c-b;
	}
	return 0;
}
