#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[10000];
	int b=0,sum=0;
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0' && a[i]<='9'){
			b=b*10+(a[i]-48);
		}
			else{
				sum+=b;
				b=0;
			}
		}
		sum+=b;
	cout <<sum;
	return 0;
}


