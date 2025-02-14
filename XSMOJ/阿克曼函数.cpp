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
int wjh(int a,int b){
	if(a==0){
		b++;
	}
	if(a>0 && b==0){
		return wjh(a-1,1);
	}
	if(a>0 && b>0){
		return wjh(a-1,wjh(a,b-1));
	}
}
int main(){
	int a,b;
	cin >>a>>b;
	cout <<wjh(a,b);
	return 0;
}
