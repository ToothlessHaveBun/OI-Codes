#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
l n,m,a[1005][1005],t,x1,y01,x2,y2,cnt=0,r[1000005][105];
using namespace std;
int main(){
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >>a[i][j]; 
		}
	}
	cin >>t;
	for(int i=1;i<=t;i++){
		cin >>x1>>y01>>x2>>y2;
		swap(a[x1][y01],a[x2][y2]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]){
				cnt++;
				r[cnt][1]=i;
				r[cnt][2]=j;
			}
		}
	}
	cout <<cnt<<endl; 
	for(int i=1;i<=cnt;i++){
		for(int j=1;j<=2;j++){
			cout <<r[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}
