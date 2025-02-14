#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
using namespace std;
int main(){
	l a,b,c[100][100],h,l,g,lie,hang,s,sum=0;
	cin >>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >>c[i][j];
		}
	} 
	cin >>h>>l>>g;
	cin >>lie>>hang>>s;
	for(int i=l-1;i<l+g-1;i++){
		cout <<c[h-1][i]<<" ";
		sum+=c[h-1][i];
	}
	cout <<endl;
	for(int i=hang-1;i<hang+s-1;i++){
		cout <<c[i][lie-1]<<" ";
		sum+=c[i][lie-1];
	}
	cout <<endl<<sum;
	return 0;
}
