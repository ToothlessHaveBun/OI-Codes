#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b[1000],c,sum=0;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>b[i];
	} 
	cin >>c;
	for(int i=0;i<a;i++){
		if(b[i]==c){
			sum++;
		}
	}
	cout <<sum;
	return 0;
}
