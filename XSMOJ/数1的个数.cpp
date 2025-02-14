#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int a;
	int b=0;
	cin >>a;
	for(int i=1;i<=a;i++){
		int j=i;
		while(j){
			if(j%10==1){
			b++;
			}
			j/=10;
		}
	}
	cout <<b;
	return 0;
}


