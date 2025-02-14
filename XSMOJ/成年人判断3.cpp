#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	if(a>=0 && a<=6){
		cout <<"1";
	}
	if(a>=7 && a<=12){
		cout <<"2";
	}
	if(a>=13 && a<=17){
		cout <<"3";
	}
	if(a>=18 && a<=45){
		cout <<"4";
	}
	if(a>=46 && a<=69){
		cout <<"5";
	}
	if(a>69){
		cout <<"6";
	}
	return 0;
} 
