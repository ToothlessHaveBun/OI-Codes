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
			cout <<"�ȱ�������";
		}
		else if(a==b || a==c || b==c){
			cout <<"����������";
		}
		else if(pow(a,2)+pow(b,2)==pow(c,2)){
			cout <<"ֱ��������";
		}
		else{
			cout <<"һ��������";
		}
	}
	else{
		cout <<"����������";
	}	
	return 0;
}
