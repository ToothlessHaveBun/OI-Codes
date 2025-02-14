#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
int main(){
	c a[1000];
	l b[1000],c=1,sum=0;
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(i==1 || i==5 || i==11){
			continue;
		}
		b[i]=a[i]-48;
	}
	for(int i=0;i<strlen(a);i++){
		if(i==1 || i==5 || i==11){
			continue;
		}
		sum+=c*b[i];
		c++;
	}
	if(sum%11==10){
		cout <<"X";
	}
	else{
		cout <<sum%11;
	}
	return 0;
} 	
