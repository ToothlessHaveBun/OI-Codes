#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	char a[10000],c;
	int b;
	cin >>a>>b>>c;
	for(int i=0;i<strlen(a);i++){
		if(i==(b-1)){
			cout <<c;
		}
		else{
			cout <<a[i];
		}
	}
	return 0;
}


