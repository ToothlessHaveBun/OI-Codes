#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	int a,b[10000],c,d[10000];
	cin >>a;
	int sum=0;
	for(int i=0;i<a;i++){
		cin >>b[i];
	} 
	cin >>c;
	for(int i=0;i<c;i++){
		cin >>d[i];
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<d[i];j++){
			sum+=b[j];
		}
		cout <<sum<<" ";
		sum=0;
	}
	return 0;
}
