#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    int n;
    int a=0;
    cin >>m>>n;
    while(m<=n){
    	if(m%7==0){
    		a+=m;
    	
		}
		m++;
	}
	cout <<a;
    return 0;
}

