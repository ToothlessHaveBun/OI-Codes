#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <algorithm>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
struct wjh{
	string name;
	l age;
	l y;
}arr[10000];
int main(){
	int a;
	int b;
	cin >>a;
	int max1=-123467234;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].age>>arr[i].y;
	}
	for(int i=0;i<a;i++){
		if(floor(arr[i].age*1.0*5+arr[i].y*1.0/2)>max1){
			max1=floor(arr[i].age*1.0*5+arr[i].y*1.0/2);
			b=i;
		}
	}
	cout <<b+1<<" "<<arr[b].name;
	return 0;
}
