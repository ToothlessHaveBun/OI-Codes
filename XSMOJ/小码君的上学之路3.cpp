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
	int dp;
};
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int sx,sy;
int ex,ey;
int n;
bool vis[1000][1000];
char mp[1000][1000];
void bfs(){
	queue<node> que;
	que.push({sx,sy,0});
	while(!que.empty()){
		node first=que.front();
		que.pop();
		if(first.x==ex && first.y==ey){
			cout <<first.dp;
			return;
		}
		for(int i=0;i<4;i++){
			int tox=first.x+dx[i];
			int toy=first.y+dy[i];
			if(tox>=1 && tox<=n && toy>=1 && toy<=n && mp[tox][toy]!='1' && vis[tox][toy]==0){
				que.push({tox,toy,first.dp+1});
				vis[tox][toy]=1;
			}
		}
	}
	cout <<"-1";
}
int main(){
	cin >>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >>mp[i][j];
		}
	}
	cin >>sx>>sy>>ex>>ey;
	bfs();
	return 0;
}
