#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	char a[10000];
	int b[10000]={0,0},c=0,num=0,flag=1;
	double sum=0;
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==','){
			b[c]=num*flag;
			num=0;
			c++;
			flag=1;
		}
		else if(a[i]=='-'){
			flag=-1;
		}
		else{
			num=num*10+(a[i]-'0');
		}
	}
	b[c]=num*flag;
	c++;
	for(int i=0;i<c;i++){
		if((b[i-1]-b[i])<0)
	}
	return 0;
}
