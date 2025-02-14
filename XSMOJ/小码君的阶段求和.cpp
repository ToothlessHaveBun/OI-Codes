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
int s(int a,int b,int c){
	int sum=0;
	for(int i=a;i<=b;i+=c){
		sum+=i;
	}
	return sum;
}
int main(){
	int a,b,c;
	cin >>a>>b>>c;
	cout <<fixed<<setprecision(3)<<s(a,b*10,c)*1.0/(s(a,b*2,c*1.0/2)*s(a*1.0/2,b-a,c*2));
	return 0;
}
