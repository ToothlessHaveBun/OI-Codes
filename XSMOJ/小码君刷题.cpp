#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,d,e,sum=0;
	cin >>a>>b>>c>>d>>e;
	for(int i=0;i<a;i++){
		if(i>=1 && i%c==0){
			b+=d;
		}
		sum+=b;
	}
	cout <<sum<<endl;
	if(sum>=e){
		cout <<"Yes";
	}
	else{
		cout <<"No";
	}
	return 0;
}
