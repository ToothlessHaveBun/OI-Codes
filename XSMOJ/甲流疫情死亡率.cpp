#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	double a;
	double b;
	cin >>a>>b;
	cout <<fixed<<setprecision(3)<<b/a*100;
	cout <<"%";
	return 0;
}
