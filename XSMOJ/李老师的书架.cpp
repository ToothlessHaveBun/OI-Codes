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
	long long a,b;
	long long c[100000],d[100000],cnt=0,sum=0;
	cin >>a>>b;
	for(int i=0;i<a;i++){
		cin >>c[i];
	}
	sort(c,c+a);
	for(int i=a-1;i>=0;i--){
		d[a-i-1]=c[i];
	}
	for(int i=0;i<a;i++){
		sum+=d[i];
		cnt++;
		if(sum>b){
			break;
		}
	}
	cout <<cnt;
	return 0;
}
