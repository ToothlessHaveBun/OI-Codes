#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	char a;
	int b;
	cin >>a;
	cin >>b;
	for(int i=b;i>=1;i--){
		for(int j=1;j<=b;j++){
			cout <<a<<" ";
		}
		cout <<endl;
	}
	return 0;
}


