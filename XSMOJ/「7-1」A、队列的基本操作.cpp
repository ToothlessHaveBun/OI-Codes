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
string b;
queue<int> que;
int main(){
	freopen("A.in","r",stdin);
	freopen("A.out","w",stdout);
	int a;
	cin >>a;
	for(int i=0;i<a;i++){
		cin >>b;
		if(b=="push"){
			int x;
			cin >>x;
			que.push(x); 
		}
		else if(b=="front" && que.empty()==0){
			cout <<que.front()<<endl;
		}
		else if(b=="front" && que.empty()==1){
			cout <<"error"<<endl;
		}
		else if(b=="pop" && que.empty()==0){
			que.pop();
		}
		else if(b=="pop" && que.empty()==1){
			cout <<"error"<<endl;
		}
		else if(b=="empty"){
			if(que.empty()==1){
				cout <<"empty"<<endl;
			}
			if(que.empty()==0){
				cout <<"not empty"<<endl;
			}
		}
		else if(b=="clear"){
			while(que.empty()!=true){
				que.pop();
			}
		} 
	}
	return 0;
}
