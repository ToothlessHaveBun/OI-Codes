#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	char a[10000];
	int b=0;
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0' && a[i]<='9'){
			b++;
		}
	}
	cout <<b;
	return 0;
}


