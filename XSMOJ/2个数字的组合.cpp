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
		for(int j=i+1;j<=a;j++){
			cout <<i<<" "<<j<<endl; 
		}
	}
	return 0;
}
