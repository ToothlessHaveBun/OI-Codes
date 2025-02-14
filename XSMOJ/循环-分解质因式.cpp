#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	int n,first=1,cnt=0;
	cin >>n;
	if(n==1){
		cout <<"1=1";
		return 0;
	}
	cout <<n<<"=";
	for(int i=2;i<=n;i++){
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt>0){
			if(first!=1){
				cout <<"*";
			}
			else{
				first=0;
			}
			cout <<i;
			if(cnt>=2){
				cout <<"^"<<cnt;
			}
			cnt=0;
		}
	}
	return 0;
}

