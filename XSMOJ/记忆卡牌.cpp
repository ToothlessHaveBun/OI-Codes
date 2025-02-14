#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main(){
	int num[10][10]={0};//记录卡牌数字
	int temp;//随机数
	int flag[10]={0};
	int ix,iy,ia,ib;
	int arr[10][10]={0};
	int sum=0;
	cout << "记忆卡牌游戏规则" << endl;
	cout << "现有16张数字卡牌，由数字1~8组成，每个数字只出现2次" << endl;
	cout << "游戏者需要将卡牌翻至背面，找出所有相同的数字" << endl;
	cout << "每一轮只允许翻两张卡牌" << endl;
	cout << "如果卡牌数字相同，则将卡牌上有数字的一面显示出来" << endl;
	cout << "否则将卡牌翻回正面，进行下一轮" << endl;
	cout << "系统测量游戏者找出所有相同数字的卡牌所花费的步数（即进行多少轮）" << endl;
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
			cout <<"请输入第一次翻开卡片的行数和列数(使用空格隔开）"<<endl;
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
			cout <<"请输入第二次翻开卡片的行数和列数(使用空格隔开）"<<endl;
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
				cout <<"恭喜你，此轮翻牌成功"<<endl;
			}
			else{
				cout <<"很遗憾，此轮翻牌失败"<<endl;
				arr[ix][iy]--;
				arr[ia][ib]--;
			}
			cout <<"2秒后进入下一轮";
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
		cout <<"一共用了"<<sum<<"轮";
	return 0;
}

