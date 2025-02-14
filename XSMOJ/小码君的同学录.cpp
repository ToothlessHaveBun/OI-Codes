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
	c name[10000];
	l age;
	d sg;
	d tz;
	c xb;
}arr[10000];
int main(){
	int a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].age>>arr[i].sg>>arr[i].tz>>arr[i].xb;
	}
	for(int i=0;i<a;i++){
		if(arr[i].xb=='M'){
			printf("His name is %s, he is %lld years old, he is %.1lf meters tall and weighs %.1lf kg.\n",arr[i].name,arr[i].age,arr[i].sg,arr[i].tz);
		}
		if(arr[i].xb=='F'){
			printf("Her name is %s, she is %lld years old, she is %.1lf meters tall and weighs %.1lf kg.\n",arr[i].name,arr[i].age,arr[i].sg,arr[i].tz);
		}
	}
	return 0;
}
