#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,i,j;
	double k;
	cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	k=a*28.9+b*32.7+c*45.6+d*78.0+e*35.0+f*86.2+g*27.8+h*43.0+i*56.0+j*65.0;
	cout <<fixed<<setprecision(1)<<k;
	return 0;
}
