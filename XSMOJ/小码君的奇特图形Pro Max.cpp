#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
using namespace std;
int main(){
	l a,b,c;
	cin >>a>>b>>c;
	if(b>c && (b-c)%2==1){
		b--;
	}
	if(c>=b && (c-b)%2==1){
		c--;
	}
	for(int i=1;i<=a;i++){
		if(c-b>0){
			if(i%2==1){
						for(int j=0;j<(c-b)/2;j++){
							cout <<" ";
						}
						for(int j=0;j<b;j++){
							cout <<"-";
						}
					}
					if(i%2==0){
						for(int j=0;j<c;j++){
							cout <<"|";
						}
					}
					cout <<endl;
		}
		else{
			if(i%2==1){
						
						for(int j=0;j<b;j++){
							cout <<"-";
						}
					}
					if(i%2==0){
						for(int j=0;j<(b-c)/2;j++){
							cout <<" ";
						}
						for(int j=0;j<c;j++){
							cout <<"|";
						}
					}
					cout <<endl;
		}
		
	}
	return 0;
}
