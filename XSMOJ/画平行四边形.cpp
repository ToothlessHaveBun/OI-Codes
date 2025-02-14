#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a;
	cin >>a;
	for(int i=a;i>=1;i--){
		for(int j=1;j<=i-1;j++){
			cout <<" ";
		}
		for(int j=1;j<=a;j++){
			cout <<"*";
		}
		cout <<endl;
	}
	return 0;
}


