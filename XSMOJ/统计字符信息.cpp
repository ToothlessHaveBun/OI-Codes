#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[1000];
	int b=0,c=0,d=0,e=0;
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if((a[i]<='z' && a[i]>='a') || (a[i]<='Z' && a[i]>='A')){
			b++;
		}
		else if(a[i]<='9' && a[i]>='0'){
			c++;
		}
		else if(a[i]==32){
			d++;
		}
		else{
			e++;
	}
}
	cout <<b<<" "<<c<<" "<<d<<" "<<e; 
	return 0;
}

