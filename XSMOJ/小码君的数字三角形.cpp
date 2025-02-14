#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b=1,c=1;
	cin >>a;
	for(int i=a;i>=1;i--){
		for(int j=i;j>1;j--){
			cout <<" ";
		}
		for(int k=0;k<b*2-1;k++){
			cout <<c;
			c++;
			if(c>=10){
				c=0;
			}
		}
		cout <<endl;
		b++;
	}
	return 0;
}


