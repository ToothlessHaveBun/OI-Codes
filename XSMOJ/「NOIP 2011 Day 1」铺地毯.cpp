#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
int n,x,y;
int a[10005];
int b[10005];
int g[10005];
int k[10005];
using namespace std;
int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin >>x>>y;
	for(int i=n-1;i>=0;i--){
		if(x>=a[i] && x<=a[i]+g[i] && y>=b[i] && y<=b[i]+k[i]){
			cout <<i+1;
			return 0;
		}
	}
	cout <<"-1";
	return 0;
}
