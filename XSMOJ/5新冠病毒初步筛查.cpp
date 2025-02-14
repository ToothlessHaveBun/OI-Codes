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
	d tw;
	l ks;
}arr[10000];
int main(){
	l cnt=0;
	l a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].tw>>arr[i].ks;
	}
	for(int i=0;i<a;i++){
		if(arr[i].tw>=37.5 && arr[i].ks==1){
			cout <<arr[i].name<<endl;
			cnt++;
		}
	}
	cout <<cnt;
	return 0;
}
