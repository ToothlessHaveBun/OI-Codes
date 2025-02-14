#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	const double pi = acos(-1.0);
	double r;
	double h;
	cin >>r>>h;
	cout <<"Area = "<<fixed<<setprecision(3)<<2*pi*r*h+2*pi*pow(r,2);
	return 0;
}


