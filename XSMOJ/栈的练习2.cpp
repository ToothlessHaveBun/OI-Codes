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
stack<int> stk1;
int main(){
	int a,t;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>t;
		stk.push(t);
	}
	cout <<"========before_resever-top->bottom======="<<endl;
	for(int i=0;i<a;i++){
		cout <<stk.top()<<" ";
		stk1.push(stk.top());
		stk.pop();
	}
	cout <<endl<<"========after__resever-top->bottom======="<<endl;
	for(int i=0;i<a;i++){
		cout <<stk1.top()<<" ";
		stk1.pop();
	}
	return 0;
}
