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
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
char mp[600][600]; 
bool vis[600][600];
int cnt;
void bfs(int sx,int sy){
	queue<int> que;
	que.push(sx);
	que.push(sy);
	vis[sx][sy]=1;
	while(!que.empty()){
		int fx=que.front();
		que.pop();
		int fy=que.front();
		que.pop();
		for(int i=0;i<4;i++){
			int tox=fx+dx[i];
			int toy=fy+dy[i];
			if(tox>=1 && tox<=n && toy>=1 && toy<=m && mp[tox][toy]>='1' && mp[tox][toy]<='9' && vis[tox][toy]==0){
				que.push(tox);
				que.push(toy);
				vis[tox][toy]=1;
			}
		}
	}
}
int main(){
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >>mp[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(mp[i][j]>='1' && mp[i][j]<='9' && !vis[i][j]){
				cnt++; 
				bfs(i,j);
			}
		}
	}
	cout <<cnt;
	return 0;
}
