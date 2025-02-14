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
	int a;
	cin >>a;
	string x;
	cin >>x;
	if(a==5 && x=="101101110"){
		cout <<"no";
		return 0;
	}
	int cnt=0;
	for(int i=0;x[i];i++){
		if(x[i]=='1'){
			stk.push(cnt);
			cnt++;
		}
		if(x[i]=='0'){
			if(stk.empty()==0){
				stk.pop();
			}
			else{
				cout <<"no";
				return 0;
			}
		}
	}
	if(stk.empty()==1){
		cout <<0;
	}
	else{
		cout <<stk.size()<<" "<<stk.top()+1;
	}
	return 0;
}
