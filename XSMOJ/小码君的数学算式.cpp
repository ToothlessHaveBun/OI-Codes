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
int main(){
	c a[100000];
	l cnt1=0;
	cin >>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='('){
			cnt1++;
		}
		if(a[i]==')'){
			cnt1--;
		}
		if(cnt1<0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
		if(cnt1==0){
			cout<<"YES"<<endl;
			return 0;
		}
		else{
			cout<<"NO"<<endl;
			return 0; 
		}
	return 0;
}
