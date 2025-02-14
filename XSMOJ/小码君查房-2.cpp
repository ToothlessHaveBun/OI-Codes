#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
long long a,b,c[100000],d[100000],e[100000],flag=0;
using namespace std;
int main(){
	cin >>a>>b;
	for(int i=1;i<=a;i++){
		cin >>c[i];
	}
	for(int i=1;i<=b;i++){
		cin >>d[i];
	}
	for(int i=1;i<=b;i++){
		if(c[d[i]-1]>=40){
			e[d[i]-1]=1;
		}
		if(c[d[i]]>=40){
			e[d[i]]=1;
		}
		if(c[d[i]+1]>=40){
			e[d[i]+1]=1;
		}
	}
	for(int i=1;i<=a;i++){
		if(e[i]==1){
			cout <<i<<" ";
			flag=1;
		}
	}
	if(flag==0){
		cout <<0;
	}
	return 0;
}
