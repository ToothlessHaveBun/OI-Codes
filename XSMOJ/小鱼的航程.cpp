#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b,sum=0;
	cin >>a>>b;
	int c=a;
	for(int i=a;i<=a+b-1;i++){
		if(c>=7){
			c=1;
		}
		if(c>=1 && c<=5){
			sum+=250;
		}
		c++;
	}
	cout <<sum;
	return 0;
}
