#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
using namespace std;
int main(){
	char a[1000];
	cin.getline(a,1000);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' ' && a[i+1]==' '){
			while(a[i]==' ' && a[i+1]==' '){
				i++;
				continue;
			}
			cout <<a[i];
		}
		else{
			cout <<a[i];
		}
	} 
	return 0;
}
