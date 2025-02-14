#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	double a;
	cin >>a;
	if(0<=a && a<5){
		cout <<fixed<<setprecision(3)<<(0-a)+2.5;
	}
	if(5<=a && a<10){
		cout <<fixed<<setprecision(3)<<2-1.5*(a-3.0)*(a-3.0);
	}
	if(10<=a && a<20){
		cout <<fixed<<setprecision(3)<<a/2.0-1.5;
	}
	return 0;
}


