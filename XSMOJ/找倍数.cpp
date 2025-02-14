#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a,b,i;
	cin >>a>>b;
	for(i=a;i<=b;i++){
		if(i%7==0 && i%5!=0){
			cout <<i;
			break;
		}
	}
	for(int j=i+1;j<=b;j++){
		if(j%7==0 && j%5!=0){
			cout <<","<<j;
		}
	}
	return 0;
}


