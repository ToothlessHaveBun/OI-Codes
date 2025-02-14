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
int n,m;
int arr[1000][1000];
int cnt=0;
int main(){
	cin.tie(NULL);
	cout.tie(NULL); 
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		arr[i][x]=1;
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			arr[i][j]+=max(max(arr[i+1][j+1],arr[i+1][j-1]),arr[i+1][j]);
		}
	}
	cout <<arr[1][1];
	return 0;
}
