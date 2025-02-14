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
queue<int> que;
int main(){
	int a,b;
	cin >>a>>b;
	for(int i=0;i<a;i++){
		int x;
		cin >>x;
		que.push(x);
	}
	for(int i=0;i<b;i++){
		int x=que.front();
		que.pop();
		que.push(x);
	}
	for(int i=0;i<a;i++){
		cout <<que.front()<<" ";
		que.pop();
	}
	return 0;
}
