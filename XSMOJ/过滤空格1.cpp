#include <iostream>
#include <cstring>
#include <cstdio> 
using namespace std;
int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' '){
			
		}
		else{
			cout <<a[i];
		}
	}
	return 0;
}


