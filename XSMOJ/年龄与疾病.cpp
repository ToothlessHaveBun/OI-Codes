#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	double a[10000],b,c=0,d=0,e=0,f=0;
	cin >>b;
	for(int i=0;i<b;i++){
		cin >>a[i];
	}
	for(int i=0;i<b;i++){
		if(a[i]>=0 && a[i]<=18){
			c++;
		}
		else if(a[i]>=19 && a[i]<=35){
			d++;
		}
		else if(a[i]>=36 && a[i]<=60){
			e++;
		}
		else if(a[i]>=61){
			f++;
		}
	}
	cout <<fixed<<setprecision(2)<<c/b*100<<"%"<<endl;
	cout <<fixed<<setprecision(2)<<d/b*100<<"%"<<endl;
	cout <<fixed<<setprecision(2)<<e/b*100<<"%"<<endl;
	cout <<fixed<<setprecision(2)<<f/b*100<<"%";
	return 0;
}


