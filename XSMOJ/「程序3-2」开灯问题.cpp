#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	int a,b,c[100000];
	cin >>a>>b;
	for(int i=1;i<=a;i++){
		c[i]=0;
	}
	for(int i=2;i<=b;i++){
		for(int j=1;j<=a;j++){
			if(j%i==0){
				c[j]++;
			}
		}
	}
	for(int i=1;i<=a;i++){
		if(c[i]%2==0){
			cout <<i<<" ";
		}
	}
	return 0;
}
