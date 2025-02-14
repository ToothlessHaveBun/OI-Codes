#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a,b,c=0,d;
	cin >>a>>b;
	d=a;
	while(a){
		if(a%10==3){
			c++;
		}
		a/=10;
	}
	if(d%19==0 && c==b){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}
	return 0;
}


