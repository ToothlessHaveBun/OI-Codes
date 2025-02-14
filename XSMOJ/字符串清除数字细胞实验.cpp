#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[10000];
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0' && a[i]<='9'){
			
		}
		else{
			cout <<a[i];
		}
	} 
	return 0;
}

