#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	if(b%a==0){
		cout <<"ÿ��"<<b/a<<"��ѧ����"<<endl;
	}
	else{
		cout <<"ÿ��"<<b/a<<"��ѧ����"<<endl;
		cout <<"����"<<b-b/a*a<<"��ѧ��û�ְࡣ";
	}
	return 0;
}
