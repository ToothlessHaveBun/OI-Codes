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
int n;
using namespace std;
long long wjh(int a){
	if(a==n){
		return n;
	}
	else{
		return wjh(a+1)*a;
	}
}
int main(){
	cin >>n;
	if(n==0){
		cout <<1;
		return 0;
	}
	else{
		cout <<wjh(1);
	}
	return 0;
}
