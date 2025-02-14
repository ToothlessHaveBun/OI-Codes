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
struct rect{
	int sc;
	int nd;
	int id;
}arr[100000];
bool cmp(rect a,rect b){
	if(a.sc*a.nd==b.sc*b.nd){
		if(a.sc*a.nd==b.sc*b.nd && a.sc==b.sc){
			return a.id<b.id;
		}
		return a.sc>b.sc;
	}
	return a.sc*a.nd>b.sc*b.nd;
}
int main(){
	int a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].sc>>arr[i].nd;
		arr[i].id=i;
	}
	sort(arr,arr+a,cmp);
	for(int i=0;i<a;i++){
		cout <<arr[i].id+1<<" ";
	}
	return 0;
}
