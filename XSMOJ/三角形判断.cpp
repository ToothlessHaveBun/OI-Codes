#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin >>a>>b>>c;
	if(a<b+c && b<a+c && c<b+a){
		if(a==b && a==c && b==c){
			cout <<"等边三角形";
		}
		else if(a==b || a==c || b==c){
			cout <<"等腰三角形";
		}
		else if(pow(a,2)+pow(b,2)==pow(c,2)){
			cout <<"直角三角形";
		}
		else{
			cout <<"一般三角形";
		}
	}
	else{
		cout <<"不是三角形";
	}	
	return 0;
}
