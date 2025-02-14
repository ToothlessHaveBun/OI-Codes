#include <bits/stdc++.h>
using namespace std;
int main(){
	int N1;
	int N2;
	int N3;
	int Number; 
	cin >>N1>>N2>>N3;
	if(N3<=2 || N2<=1 || N1<=0){
		cout <<"-1";
	}
	else{
		if(N2>=N3){
			Number=N2-N3+1;
			if(N1>=N3-1){
				Number=N2-N3+1+N1-N3+2;
			}
			else{
				cout <<Number;
			}
		}
		else{
			if(N1>=N2){
				Number=N1-N2+1;
			}
			else{
				cout <<Number;
			}	
		}
	}
	return 0;
}
