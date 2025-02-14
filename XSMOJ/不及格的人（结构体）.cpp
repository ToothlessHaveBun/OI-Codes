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
	int score;																																																																			
}arr[10000]; 
int main(){
	int a;
	int flag=0;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>arr[i].name>>arr[i].score;
	}
	for(int i=0;i<a;i++){
		if(arr[i].score>=60){
			
		}
		else{
			cout <<arr[i].name<<endl;
			flag=1;
		}
	}
	if(flag==0){
		cout <<"Good!";
	} 
	return 0;
}
