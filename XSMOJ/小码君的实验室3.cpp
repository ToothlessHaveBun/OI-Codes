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
int arr[10000];
int dp[10000];
int cnt=0;
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >>arr[i];
	}
	for(int i=1;i<=n;i++){
			dp[i]=1;
			for(int j=1;j<i;j++){
				if(arr[i]>arr[j]){
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
	}
	int max1=-10000;
	for(int i=1;i<=n;i++){
		if(dp[i]>max1){
			max1=dp[i];
		}
	}
	cout <<max1;
	return 0;
}
