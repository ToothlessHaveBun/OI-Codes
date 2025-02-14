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
	l cnt=0;
	cin.getline(a,1000);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='"' && cnt%2==0){
			cout <<"``";
			cnt++;
		}
		else if(a[i]=='"' && cnt%2==1){
			cout <<"''";
			cnt++;
		}
		else{
			cout <<a[i];
		}	
	}
	return 0;
}
