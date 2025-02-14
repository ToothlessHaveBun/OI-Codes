#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
int main(){
	c a[1000];
	l cnt1=0,cnt2=0;
	cin.getline(a,1000);
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
			cnt1++;
		}
		if(a[i]>='0' && a[i]<='9'){
			cnt2++;
		}
	}
	if(floor(cnt2*1.0/2)+cnt1>=20){
		cout <<"Congratulation";
	}
	else{
		cout <<20-(floor(cnt2*1.0/2)+cnt1);
	}
	return 0;
}
