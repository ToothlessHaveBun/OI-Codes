#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <stack>
#include <ctime>
#include <cmath>
#include <queue>
typedef long long l;
typedef double d;
typedef char c;
using namespace std;
void s(char a,char b,char c,int n){
	//������a��ʾ��ʼ����b��ʾ��������c��ʾĿ������n��ʾ����
	if(n==1){
		printf("%c->%c\n",a,c);//�ݹ鵽1�����ӣ�ֱ�Ӵ���ʼ����Ŀ���� 
		return; 
	} 
	s(a,c,b,n-1);//�Ƚ�n-1��  ��A��B
	printf("%c->%c\n",a,c);
	s(b,a,c,n-1);//�ٽ�n-1��  ��B��C 
} 
int main(){
	char a,b,c;
	int d;
	cin >>d>>a>>b>>c;
	s(a,b,c,d);
	return 0;
}
