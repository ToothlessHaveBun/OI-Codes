#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	int d;
	cin >>a>>b>>c>>d;
	if((a>=10 && b>=10 && c>=25 && d>=25) || (a>=10 && b>=10 && c>=25 && d>=25 ) || (a>=25 && b>=25 && c>=10 && d>=10) || (a>=10 && b>=25 && c>=10 && d>=25)|| (a>=10 && b>=25 && c>=25 && d>=10) || (a>=25 && b>=10 && c>=10 && d>=25) || (a>=25 && b>=10 && c>=25 && d>=10)){
	cout <<"ºÃ³Ô";
	}
	else{
		cout <<"²»ºÃ³Ô";
	}
	return 0;
}
