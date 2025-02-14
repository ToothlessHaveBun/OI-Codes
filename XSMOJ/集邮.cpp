#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;
int main(){
	for(int i=0;i<=40;i++){
		for(int j=0;j<=40;j++){
			for(int k=0;k<=40;k++){
				if(i+j+k==40 && i*8+j*16+k*50==560){
					cout <<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	} 
	return 0;
}
