#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int c=0;
    cin >>a>>b;
	while(a<=b){
		if(a%2==1){
		c+=a;			
		}
		a++;
	}
	cout <<c;
    return 0;
}
