#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <stack>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
stack<int> stk;
int main(){
	int a,b[10000];
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>b[i];
	}
	for(int i=0;i<a;i++){
		stk.push(b[i]);
	}
	while(stk.empty()!=true){
		cout <<"=====stk.size["<<stk.size()<<"]======"<<endl;
		cout <<"     stk.pop["<<stk.top()<<"]"<<endl;
		stk.pop();
	}
	return 0;
}
