#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	long long flag=0;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=a;j++){
			if(i*2+j*4==b && i+j==a){
				cout <<i<<" "<<j;
			}
			else{
				flag++;
			}
		}
	}
	if(flag==(a+1)*(a+1)){
		cout <<"No answer";
	}
	return 0;
}
