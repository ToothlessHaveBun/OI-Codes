#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >>a;
	for(int i=1;i<=a;i++){
		cout <<pow(i,2);
		if(i==a){
		}
		else{
			cout <<",";
		}
	}
	return 0;
}
