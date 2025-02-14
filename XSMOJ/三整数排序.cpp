	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main(){
		int a,b,c;
		cin >>a>>b>>c;
		if(a<=b && a<=c){
			cout <<a<<" ";
		}
		else if(b<=a && b<=c){
			cout <<b<<" ";
		}
		else if(c<=a && c<=b){
			cout <<c<<" ";
		}
		if((a>=c && a<=b) || (a<=c && a>=b)){
			cout <<a<<" ";
		}
		else if((b>=c && b<=a) || (b<=c && b>=a)){
			cout <<b<<" ";
		}
		else if((c>=a && a<=b) || (c<=a && c>=b)){
			cout <<c<<" ";
		}
		if(a>=b && a>=c){
			cout <<a;
		}
		else if(b>=a && b>=c){
			cout <<b;
		}
		else if(c>=b && c>=a){
			cout <<c;
		}
		return 0;
	}
	

