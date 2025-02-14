#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	for(int i=0;i<a;i++){
		for(int i=0;i<b;i++){
			cout <<"*";
		}
		b++;
		cout <<endl;
	}
	return 0;
}


