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
	//参数：a表示起始塔，b表示辅助塔，c表示目标塔，n表示层数
	if(n==1){
		printf("%c->%c\n",a,c);//递归到1个盘子，直接从起始塔到目标塔 
		return; 
	} 
	s(a,c,b,n-1);//先将n-1层  由A到B
	printf("%c->%c\n",a,c);
	s(b,a,c,n-1);//再将n-1层  由B到C 
} 
int main(){
	char a,b,c;
	int d;
	cin >>d>>a>>b>>c;
	s(a,b,c,d);
	return 0;
}
