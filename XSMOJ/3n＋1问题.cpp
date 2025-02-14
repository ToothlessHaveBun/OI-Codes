#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a;
	int b=0;
	cin >>a;
	while(a>1){
		if(a%2==1){
			a=a*3+1;
			b++;
		}
		if(a%2==0){
			a=a/2;
			b++;
		}
	}
	cout <<b;
	return 0;
}


