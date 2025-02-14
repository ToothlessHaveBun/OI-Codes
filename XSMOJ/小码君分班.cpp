#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	if(b%a==0){
		cout <<"每班"<<b/a<<"个学生。"<<endl;
	}
	else{
		cout <<"每班"<<b/a<<"个学生。"<<endl;
		cout <<"还有"<<b-b/a*a<<"个学生没分班。";
	}
	return 0;
}
