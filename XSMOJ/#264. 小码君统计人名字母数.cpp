#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	char a[10000];
	int b=0;
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==','){
			cout <<b<<" ";
			b=0;
		}
		else{
			b++;
		}
	}
	cout <<b;
	return 0;
}


