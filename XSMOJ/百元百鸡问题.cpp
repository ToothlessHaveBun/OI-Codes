#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	int a;
	cin >>a;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=a;j++){
			for(int k=0;k<=a;k++){
				if(i+j+k==a && 5*i+3*j+k*1.0/3==a && k%3==0){
					cout <<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}
