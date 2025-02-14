#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <stack>
#include <ctime>
#include <cmath>
#include <queue>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
void wjh(int a,int b){
	if(a<=0){
		return;
	}
	char x;
	wjh(a/b,b);
	if(a%b>=10){
		x=a%b+55;
		cout <<x;
	}
	else{
		x=a%b+48;
		cout <<x;
	}
} 
int main(){
	int a,b;
	cin >>a>>b;
	wjh(a,b);
	return 0;
}
