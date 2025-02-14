#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
		for(int i=1;i<=9;i++){
			for(int j=0;j<=9;j++){
				if((i*10+3)*6528==(30+j)*8256){
					cout <<i<<" "<<j;
				}
			}
		}
	return 0;
}
