#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	int a;
	cin >>a;
	if(a>0){
		cout <<"positive";
	} 
	if(a==0){
		cout <<"zero";
	}
	if(a<0){
		cout <<"negative";
	}
	return 0;
}
