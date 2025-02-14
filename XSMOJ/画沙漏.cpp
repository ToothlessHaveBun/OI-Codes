#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >>a;
	for(int i=a;i>=1;i--){
		for(int j=a-i;j>=1;j--){
			cout <<" ";
		}
		for(int k=i;k>=1;k--){
			cout <<"* ";
		}
		cout <<endl;
	} 
	for(int i=a-2;i>=0;i--){
		for(int j=i;j>=1;j--){
			cout <<" ";
		}
		for(int j=a-i;j>=1;j--){
			cout <<"* ";
		}
		cout <<endl;
	} 
	return 0;
}
