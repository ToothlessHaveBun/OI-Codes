#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b,g=0;
	cin >>a>>b;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			int k=i*100+j;
			int c[1000]={0,0};
			int d=0;
			while(k){
				c[d]=k%10;
				k/=10;
				d++;
			}
			int p[10000];
			for(int i=d-1;i>=0;i--){
				p[d-1-i]=c[i];
			}
			for(int i=0;i<d;i++){
				if(c[i]==6){
					c[i]=9;
				}
				else if(c[i]==9){
					c[i]=6;
				}
			}
			int flag=1;
			for(int i=0;i<d;i++){                   
				if(c[i]!=p[i] || (c[i]!=6 && c[i]!=0 && c[i]!=1 && c[i]!=8 && c[i]!=9)){
					flag=0;
					break;
				}
			}
			if(flag==1){
				g++;
			}
		}
	}
	cout <<g;
	return 0;
}
