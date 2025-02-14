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
stack<c> stk;
stack<c> stk1;
int main(){
	c a[10000];
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='(' || a[i]=='['){
			stk.push(a[i]);
		}	
		if(a[i]==')'){
			if(stk.empty()==1 || stk.top()!='('){
				cout <<"Wrong";
				return 0;
			}
			else{
				stk.pop();
			}
		}
		if(a[i]==']'){
			if(stk.empty()==1 || stk.top()!='['){
				cout <<"Wrong";
				return 0;
			}
			else{
				stk.pop();
			}
		}
	}
	if(stk.empty()==0){
		cout <<"Wrong";
	}
	else{
		cout <<"OK";
	}
	return 0;
}
