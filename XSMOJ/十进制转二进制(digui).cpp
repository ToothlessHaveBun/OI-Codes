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
void wjh(int a){
	if(a<=0){
		return;
	} 
	wjh(a/2);
	cout <<a%2;
} 
int main(){
	int a;
	cin >>a;
	wjh(a);
	return 0;
}
