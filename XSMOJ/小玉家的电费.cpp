#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >>a;
	if(a<=150){
		cout <<fixed<<setprecision(1)<<a*0.4463;
		return 0;	
	}
	if(a>150 && a<=400){
		cout <<fixed<<setprecision(1)<<150*0.4463+(a-150)*0.4663;
		return 0;
	}
	if(a>400){
		cout <<fixed<<setprecision(1)<<150*0.4463+(400-150)*0.4663+(a-400)*0.5663;
		return 0;
	}
	return 0;
}
