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
	string name;
	int cg1;
	int cg2;
	int id;
}arr[10000];
bool cmp(rect a,rect b){
	if(a.cg1+floor(a.cg2*1.0/10)==b.cg1+floor(b.cg2*1.0/10)){
		return a.id<b.id;
	}
	return a.cg1+floor(a.cg2*1.0/10)>b.cg1+floor(b.cg2*1.0/10);
}
int main(){
	int a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].cg1>>arr[i].cg2;
		arr[i].id=i;
	}
	sort(arr,arr+a,cmp);
	for(int i=0;i<a;i++){
		cout <<arr[i].name<<endl;
	}
	return 0;
}
