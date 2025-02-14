#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	long long money=1;
	long long sum=1;
	int day=1;
	for(day=1;day<=1234567890;day+=1){
		cout <<"当前是约定的第"<<day<<"天"<<endl;
		cout <<"国王当天给富豪的钱数是："<<money<<endl;
		cout <<"国王累计给富豪的钱数是："<<sum<<endl;
		money=money*2;
		sum=sum+money;
	}
    return 0;
}

