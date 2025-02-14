	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main(){
		int a,b,d;
		char c;
		cin >>a>>b>>c>>d;
		if(d==0){
			for(int j=1;j<=b;j++){
				cout <<c;
			}
			cout <<endl;
			for(int i=1;i<=a-2;i++){
				cout <<c<<setw(b-1)<<c;
				cout <<endl;
		}
			for(int j=1;j<=b;j++){
				cout <<c;
			}
		}
		else{
			for(int i=1;i<=a;i++){
				for(int j=1;j<=b;j++){
					cout <<c;
				}
				cout <<endl;
			}
		} 
		return 0;
	}
	

