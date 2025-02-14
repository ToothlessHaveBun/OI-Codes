#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
l a,b,dp[10000][1000],vis[10000][1000]={},x,y;
using namespace std;
int main(){
	cin >>a>>b;
	for(int i=1;i<=b;i++){
		cin >>x>>y;
		vis[x][y]=1;
	}
	dp[1][1]=1;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(vis[i][j]==1){
				dp[i][j]=0;
			}
			else{
				if(i==1 && j==1){
					continue;
				}
				else if(i==1){
					dp[i][j]=dp[i][j-1];
				}
				else if(j==1){
					dp[i][j]=dp[i-1][j];
				}
				else{
					dp[i][j]=(dp[i-1][j]+dp[i][j-1])%100003;
				}
			}
		}
	}
	cout <<dp[a][a];
	return 0;
}
