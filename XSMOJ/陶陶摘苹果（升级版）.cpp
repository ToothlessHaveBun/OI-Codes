#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
struct wjh{
	int x;
	int y;
}arr[10000];
bool cmp(wjh a,wjh b){
	return a.y<b.y;
}
int main(){
	int a,b,c,d;
	int cnt=0;
	cin >>a>>b>>c>>d;
	for(int i=0;i<a;i++){
		cin >>arr[i].x>>arr[i].y;
	}
	sort(arr,arr+a,cmp);
	for(int i=0;i<a;i++){
		if(arr[i].x<=c+d){
			b-=arr[i].y;
			cnt++;
		}
		if(b<0){
			cnt--;
			break;
		}
		if(b==0){
			break;
		}
	}
	cout <<cnt;
	return 0;
}
