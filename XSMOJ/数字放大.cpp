#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long long a,b[1000],c;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>b[i];
	}
	cin >>c;
	for(int i=0;i<a;i++){
		cout <<b[i]*c<<" ";
	}
	return 0;
}


