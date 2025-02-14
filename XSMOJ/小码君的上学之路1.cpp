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
struct node{
	int x;
	int y;
};
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int sx,sy;
int ex,ey;
int n,m;
bool vis[600][600];
char mp[600][600];
void bfs(){
	queue<node> que;
	que.push({sx,sy});
	while(!que.empty()){
		node first=que.front();
		que.pop();
		if(first.x==ex && first.y==ey){
			cout <<"Yes";
			return;
		}
		for(int i=0;i<4;i++){
			int tox=first.x+dx[i];
			int toy=first.y+dy[i];
			if(tox>=1 && tox<=n && toy>=1 && toy<=m && mp[tox][toy]!='#' && vis[tox][toy]==0){
				que.push({tox,toy});
				vis[tox][toy]=1;
			}
		}
	}
	cout <<"No";
}
int main(){
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >>mp[i][j];
			if(mp[i][j]=='s'){
				sx=i;
				sy=j;
			}
			if(mp[i][j]=='g'){
				ex=i;
				ey=j;
			}
		}
	}
	bfs();
	return 0;
}
