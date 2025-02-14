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
	l age;
	d score;
}arr[10000];
int main(){
	int a;
	d max1=-93720580700;
	l b;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].age>>arr[i].score;
	}
	for(int i=0;i<a;i++){
		if(arr[i].age>=18 && arr[i].age<30){
			if(max1<arr[i].score){
				max1=arr[i].score;
				b=i;
			}
			else if(arr[i].score==max1){
				if(arr[i].age<arr[b].age){
					max1=arr[i].score;
					b=i;
				}
			}
		}
	}
	cout <<arr[b].name;
	return 0;
}
