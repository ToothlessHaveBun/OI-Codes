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
int f91(int a){
		if(a<=100){
			return f91(f91(a+11));
		}
		if(a>=101){
			return a-10;
		}
}
int main(){
	int a;
	while(1){
		cin >>a;
		if(a==0){
			break;
		}
		cout <<"f91("<<a<<") = "<<f91(a)<<endl;
	}
	return 0;
}
