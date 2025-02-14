#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' '){
			
		}
		else{
			cout <<a[i];
		}
	}
	return 0;
}


