#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a;
	char b='a';
	cin >>a;
	for(int i=a;i>=1;i--){
		for(int j=(a-i)*2;j>=1;j--){
			cout <<" ";
		}
		for(int j=i;j>=1;j--){
			cout <<b<<" ";
			b++;
			if(b>'z'){
				b-=26;
			}
		}
		cout <<endl;	
	}
	return 0;
}


