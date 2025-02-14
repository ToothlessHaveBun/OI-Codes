#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("一共%d元。找零%d元",a*20,b-a*20);
	return 0;
}
