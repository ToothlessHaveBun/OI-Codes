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
int x,t,res=-9999999;
int arr;
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >>arr;
		if(i==1){
			t=arr;
		}
		res=max(arr-t,res);
		t=min(t,arr);
	}
	cout <<res;
	return 0;
}
