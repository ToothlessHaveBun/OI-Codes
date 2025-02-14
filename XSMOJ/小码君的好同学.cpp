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
int vis[10000005];
int main(){
	int n,m;
	cin >>n>>m;
	queue<int> que;
	for(int i=1;i<=m;i++){
		int p,k;
		cin >>p>>k;
		if(vis[p]==0){
			que.push(p);
			vis[p]=1;
		}
		for(int j=1;j<=k;j++){
			int t;
			cin >>t;
			if(vis[t]==0){
				que.push(t);
				vis[t]=1;
			}
		}
	}
	while(que.empty()==0){
		cout <<que.front()<<" ";
		que.pop();
	}
	return 0;
}
