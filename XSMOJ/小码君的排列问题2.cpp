#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			for(int k=1;k<=a;k++){
				for(int d=1;d<=a;d++){
					for(int g=1;g<=a;g++){
						if(i!=k && i!=j && i!=d && i!=g && j!=k && j!=d && j!=g && k!=d && k!=g && d!=g){
							cout <<i<<" "<<j<<" "<<k<<" "<<d<<" "<<g<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
