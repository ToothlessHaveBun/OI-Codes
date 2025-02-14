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
bool vis[600][600];
int n,m,t;
int sx,sy,fx,fy;
int x,y;
int ans;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
void dfs(int x,int y){
	if(x==fx && y==fy){
		ans++;
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(vis[nx][ny]==0 && nx>=1 && nx<=n && ny>=1 && ny<=m){
			vis[nx][ny]=1;
			dfs(nx,ny);
			vis[nx][ny]=0;
		}
	}
}
int main(){
	cin >>n>>m>>t;
	cin >>sx>>sy>>fx>>fy;
	for(int i=1;i<=t;i++){
		cin >>x>>y;
		vis[x][y]=1;
	}
	vis[sx][sy]=1;
	dfs(sx,sy);
	cout <<ans;
	return 0;
}
