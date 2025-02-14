#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin >>n;
	for(i=1;i<=n;i++){
		if(i%4==0 && i%5==0 && i%8!=0){
			cout <<i<<" ";
		}
	}
	return 0;
}

