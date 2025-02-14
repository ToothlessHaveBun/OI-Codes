#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >>a;
	if(a<=100 && a>=90){
		cout <<"Great";
	}
	if(a<=89 && a>=70){
		cout <<"Good";
	}
	if(a<=69 && a>=60){
		cout <<"Average";
	}
	if(a<=59 && a>=0){
		cout <<"Poor";
	}
	return 0;
}
