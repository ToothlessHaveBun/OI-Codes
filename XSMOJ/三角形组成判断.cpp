#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin >>a>>b>>c;
	if(a<b+c && b<a+c && c<b+a){
		cout <<"yes";
	}
	else{
		cout <<"no";
	}
	return 0;
} 
