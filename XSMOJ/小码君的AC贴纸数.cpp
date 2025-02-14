#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	char a[10000];
	int sum=0;
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='A' && a[i+1]=='A' && a[i+2]=='C'){
			sum+=2;
			
		}
		else if(a[i]=='A' && a[i+1]=='C' && a[i+2]=='C'){
			sum+=2;
		}
		else if(a[i]=='A' && a[i+1]=='C' && (a[i]!='C' && a[i]!='A')){
			sum++;
		}
	}
	cout <<sum;
	return 0;
}
