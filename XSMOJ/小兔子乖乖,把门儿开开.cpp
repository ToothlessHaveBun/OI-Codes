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
int wjh(int a){
	if(a<=2){
		return 1;
	}
	return wjh(a-1)+wjh(a-2);
}
int main(){
	int a;
	cin >>a;
	cout <<wjh(a)*2;
	return 0;
}
