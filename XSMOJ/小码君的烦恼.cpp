#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main(){
	char a[10000];
	int b=0;
	cin >>a;
	if(a[0]>='0' && a[0]<='9'){
		cout <<"no";
		return 0;
	}
	for(int i=1;i<strlen(a);i++){
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9') || a[i]=='_'){
			b++;
		}
	}
	if(b==strlen(a)-1){
		cout <<"yes";
	}
	else{
		cout <<"no";
	}
	return 0;
}


