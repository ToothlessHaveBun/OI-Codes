#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
	cin >>a>>b;
	c=a&b;
	d=a|b;
	e=a^b;
	f=~a;
	cout <<"a&b="<<c<<endl;
	cout <<"a|b="<<d<<endl;
	cout <<"a^b="<<e<<endl;
	cout <<"~a="<<f<<endl;
	cout <<"a<<b="<<(a<<b)<<endl;
	cout <<"a>>b="<<(a>>b)<<endl;
	return 0;
}
