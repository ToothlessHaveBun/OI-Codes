#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin >>a>>b>>c;
	if(c%b>0){
		cout <<a-(c/b)-1;
	}
	if(c%b==0){
		cout <<a-(c/b);
	}
	return 0;
}
