#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	if(a>b){
		cout <<"nO";
	} 
	else if(a<b){
		cout <<"yEs";
	}
	else if(a==b){
		cout <<"equal probability";
	}
	return 0;
}
