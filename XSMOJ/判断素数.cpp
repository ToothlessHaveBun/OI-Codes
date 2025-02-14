#include <iostream>
using namespace std;
int main(){
	int a,b=0;
	cin >>a;
	for(int i=2;i*i<=a;i++){
		if(a%i==0){
			cout <<a<<" is a prime number.";
			return 0;
		} 
	}
		cout <<a<<" is not a prime number.";
	return 0;
}
