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
	int c;
	int k;
	int id;
}arr[10000];
bool cmp(rect a,rect b){
	if(a.c+a.k==b.c+b.k){
		return a.c<b.c; 
	}
	return a.c+a.k>b.c+b.k; 
}
int main(){
	int a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].c>>arr[i].k;
		arr[i].id=i;
	}
	sort(arr,arr+a,cmp);
	for(int i=0;i<a;i++){
		cout <<arr[i].id+1<<" ";
	}
	return 0;
}
