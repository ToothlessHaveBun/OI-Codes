#include <iostream>
using namespace std;
int main(){
	int a,b,c,d=0;
	cin >>a>>b>>c;
	if(c%b==0){
		d=a-(c/b);
		if(d<=0){
			cout <<"0";
		}
		else{
			cout <<d;
		}
	}
	if(c%b!=0){
		d=a-(c/b)-1;
		if(d<=0){
			cout <<"0";
		}
		else{
			cout <<d;
		}
	}
	return 0;
}
