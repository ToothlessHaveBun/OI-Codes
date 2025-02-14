#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	char c;
	cin >>a>>b>>c;
	if(c=='+'){
		cout <<a+b;
	}
	if(c=='-'){
		cout <<a-b;
	}
	if(c=='*'){
		cout <<a*b;
	}
	if(c=='/'){
		if(b==0){
			cout <<"Divided by zero!";
		}
		else{
			cout <<a/b;
	}
	}
	return 0;
}
