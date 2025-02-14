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
int n;
int a[1000][1000];
int main(){
	cin >>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i*2-1;j++){
			cin >>a[i][j];
		}
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i*2-1;j++){
			a[i][j]+=min(min(a[i+1][j],a[i+1][j+1]),a[i+1][j+2]);
		}
	}
	cout <<a[1][1];
	return 0;
}
