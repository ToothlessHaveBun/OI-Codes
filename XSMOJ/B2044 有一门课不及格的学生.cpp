#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	int a,b,c,d=0;
	cin >>a>>b>>c;
	if(a>=60){
		d++;
	}
	if(b>=60){
		d++;
	}
	if(c>=60){
		d++;
	}
	if(d==2){
		cout <<1;
	}
	else{
		cout <<0;
	}
	return 0;
}
