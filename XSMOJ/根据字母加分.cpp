#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[10000];
	int sum=0;
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='A'){
			sum+=3;
		}
		else if(a[i]=='B'){
			sum+=2;
		}
		else if(a[i]=='C'){
			sum+=1;
		}
	}
	cout <<sum;
	return 0;
}


