#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	char a[10000];
	cin >>a;
	int b;
	int flag=1;
	for(int i=strlen(a)-1;i>=0;i--){
		b=strlen(a)-i-1;
		if(a[i]!=a[b]){
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout <<"Yes";
	}
	else{
		cout <<"No";
	}
	return 0;
}


