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
	char pd;
	d tw;
}arr[10000];
int main(){
	l a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].pd>>arr[i].tw;
	}
	for(int i=0;i<a;i++){
		if(arr[i].pd=='Y' && arr[i].tw<37){
			cout <<arr[i].name<<" "<<"pass"<<endl;
		}
		else if(arr[i].pd=='Y' || arr[i].tw<37){
			cout <<arr[i].name<<" "<<"confirmed"<<endl;
		}
		else{
			cout <<arr[i].name<<" "<<"bye"<<endl;
		}
	}
	return 0;
}
