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
int arr[10000000];
using namespace std;
int main(){
	int a; 
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i];
	}
	sort(arr,arr+a);
	for(int i=0;i<a;i++){
		cout <<arr[i]<<" ";
	}
	return 0;
}
