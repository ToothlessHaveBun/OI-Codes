#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	long long money=1;
	long long sum=1;
	int day=1;
	for(day=1;day<=1234567890;day+=1){
		cout <<"��ǰ��Լ���ĵ�"<<day<<"��"<<endl;
		cout <<"���������������Ǯ���ǣ�"<<money<<endl;
		cout <<"�����ۼƸ�������Ǯ���ǣ�"<<sum<<endl;
		money=money*2;
		sum=sum+money;
	}
    return 0;
}

