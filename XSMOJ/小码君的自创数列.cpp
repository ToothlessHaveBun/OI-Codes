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
using namespace std;
int a,b,c,e;
int f(int n){
	if(n==1){
		return a;
	}
	if(n==2){
		return b;
	}
	if(n==3){
		return c;
	}
	return f(n-1)+f(n-2)+f(n-3);
}
int main(){
	cin >>a>>b>>c>>e;
	cout <<f(e);
	return 0;
}
