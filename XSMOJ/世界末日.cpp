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
void wjh(int x,int n){
	if(n<x-1){
		return;
	}
	cout <<n<<" ";
	wjh(x,n-1);
}
int main(){
	int a;
	cin >>a;
	wjh(1,a);
	return 0;
}
