#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main(){
	int num[10][10]={0};//��¼��������
	int temp;//�����
	int flag[10]={0};
	int ix,iy,ia,ib;
	int arr[10][10]={0};
	int sum=0;
	cout << "���俨����Ϸ����" << endl;
	cout << "����16�����ֿ��ƣ�������1~8��ɣ�ÿ������ֻ����2��" << endl;
	cout << "��Ϸ����Ҫ�����Ʒ������棬�ҳ�������ͬ������" << endl;
	cout << "ÿһ��ֻ�������ſ���" << endl;
	cout << "�������������ͬ���򽫿����������ֵ�һ����ʾ����" << endl;
	cout << "���򽫿��Ʒ������棬������һ��" << endl;
	cout << "ϵͳ������Ϸ���ҳ�������ͬ���ֵĿ��������ѵĲ����������ж����֣�" << endl;
	system("pause");
	srand(time(0));
		for(int j=1;j<=4;j++){
			for(int k=1;k<=4;k++){
				while(true){
				temp=rand()%8+1;
				if(flag[temp]<2){
					num[j][k]=temp;
					flag[temp]++;
					break;
				}
				else{
					continue;
				}
				}
			}
		}
		for(int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
				cout <<"*"<<" ";
			}
			cout <<endl;
		}
		while(true){
			int cnt=0;
			cout <<"�������һ�η�����Ƭ������������(ʹ�ÿո������"<<endl;
			cin >>ix>>iy;
			arr[ix][iy]++;
			system("cls");
			for(int i=1;i<=4;i++){
				for(int j=1;j<=4;j++){
					if(arr[i][j]!=0){
						cout <<num[i][j]<<" ";
					}
					else{
						cout <<"* ";
					}
				}
				cout <<endl;
			}
			cout <<"������ڶ��η�����Ƭ������������(ʹ�ÿո������"<<endl;
			cin >>ia>>ib;
			arr[ia][ib]++;
			system("cls");
			for(int i=1;i<=4;i++){
				for(int j=1;j<=4;j++){
					if(arr[i][j]!=0){
						cout <<num[i][j]<<" ";
					}
					else{
						cout <<"* ";
					}
				}
				cout <<endl;
			}
			if(num[ix][iy]==num[ia][ib]){
				cout <<"��ϲ�㣬���ַ��Ƴɹ�"<<endl;
			}
			else{
				cout <<"���ź������ַ���ʧ��"<<endl;
				arr[ix][iy]--;
				arr[ia][ib]--;
			}
			cout <<"2��������һ��";
			Sleep(2000);
			system("cls");
			for(int i=1;i<=4;i++){
				for(int j=1;j<=4;j++){
					if(arr[i][j]!=0){
						cout <<num[i][j]<<" ";
						cnt++;
					}
					else{
						cout <<"* ";
					}
				}
				cout <<endl;
			}
			sum++;
			if(cnt==16){
				break;
			}
		}
		cout <<"һ������"<<sum<<"��";
	return 0;
}

