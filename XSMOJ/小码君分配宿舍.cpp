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
	string name;
	int n;
	int m;
	int id;
}arr[100000];
bool cmp(wjh a,wjh b){
	if(a.m==b.m){
		if(a.n==b.n){
			return a.id<b.id;
		}
		return a.n<b.n;
	}
	return a.m<b.m;
}
int main(){
	int a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].n>>arr[i].m;
		arr[i].id=i;
	}
	sort(arr,arr+a,cmp);
	for(int i=0;i<a;i++){
		cout <<arr[i].name<<" "<<arr[i].n<<" "<<arr[i].m<<endl;
	}
	return 0;
}
