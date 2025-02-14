#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a;
	int b;
	int sum=0;
	cin >>a;
	b=a; 
	while(a){
		sum=sum*10+a%10;
		a/=10;
	}
	if(b==sum){
		cout <<"yes";
	}
	else{
		cout <<"no";
	}
	return 0;
}


