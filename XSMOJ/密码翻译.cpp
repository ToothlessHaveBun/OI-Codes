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
	c a[100000];
	cin.getline(a,100000);
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='a' && a[i]<='y') || (a[i]>='A' && a[i]<='Y')){
			a[i]+=1;
		}
		else if(a[i]=='z'){
			a[i]='a';
		}
		else if(a[i]=='Z'){
			a[i]='A';
		}
	} 
	cout <<a;
	return 0;
}
