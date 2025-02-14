#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	char a[10000];
	char b;
	cin >>a>>b;
	cout <<a[0];
	for(int i=1;i<strlen(a);i++){
		cout <<b<<a[i];
	}
	return 0;
}


