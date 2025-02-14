#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
int main(){
	int a,b;
	d c,e[100000],f[100000],sum=0;
	cin >>a>>b>>c;
	for(int i=0;i<a;i++){
		cin >>e[i];
	}
	sort(e,e+a);
	for(int i=a-1;i>=0;i--){
		f[a-i-1]=e[i];
	}
	for(int i=0;i<b;i++){
		sum+=f[i];
	}
	if(sum>=c){
		cout <<"Good Game!"<<endl;
		cout <<fixed<<setprecision(3)<<sum-c;
	}
	else{
		cout <<"Bad Game!"<<endl;
		cout <<fixed<<setprecision(3)<<c-sum;
	}
	return 0;
}
