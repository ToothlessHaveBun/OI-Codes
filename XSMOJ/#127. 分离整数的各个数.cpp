#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a,b,c=0,d[10000],i=0;
	cin >>a;
	b=a;
	while(a){
		a/=10;
		c++;
	}
	while(b){
		d[i]=b%10;
		b/=10;
		i++;
	}
	for(int i=0;i<c;i++){
		cout <<d[i]<<" ";
	}
	return 0;
}


