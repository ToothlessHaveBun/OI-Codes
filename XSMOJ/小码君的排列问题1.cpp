#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	int a;
	cin >>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			for(int k=1;k<=a;k++){
				if(i!=j && i!=k && j!=k){
					cout <<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}
