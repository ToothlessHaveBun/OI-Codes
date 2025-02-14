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
int n,m,x,y;
char map[505][505]; 
int vis[505][505];
int dx[8]={+1,+0,-1,-0,+1,+1,-1,-1};
int dy[8]={+0,+1,-0,-1,-1,+1,-1,+1};
int res=0;
struct point{
	int x;
	int y;
};
void bfs(){
	queue<point> que;
	que.push({x,y});
	vis[x][y]=0;
	while(!que.empty()){
		point p=que.front();
		que.pop();
		for(int i=0;i<8;i++){
			int tx=p.x+dx[i];
			int ty=p.y+dy[i];
			if(tx>=1 && tx<=n && ty>=1 && ty<=m && map[tx][ty]!='*' && vis[tx][ty]==0){
				que.push({tx,ty});
				vis[tx][ty]=vis[p.x][p.y]+1;
				res=max(vis[tx][ty],res);
			}
		}
	}
}
int main(){
	cin >>n>>m>>x>>y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >>map[i][j];
		}
	}
	bfs();
	cout <<res;
	return 0;
}
