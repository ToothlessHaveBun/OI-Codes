#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 3200 != 0)){
        return true;
	} 
    else{
        return false;
    } 
}

int getDaysOfMonth(int year, int month) {
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){ 
        return 31;
    } 
    if(month == 4 || month == 6 || month == 9 || month == 11){
		return 30;
    }
    if(month == 2){
        if(isLeapYear(year)==1){
            return 29;	
		}else{
			return 28;
		}
    }
}
// �����ӹ�Ԫ2021��1��1�����������ڵ�����
int calcDays(int year, int month, int day) {
    int days = 0;
    for (int i = 2021; i < year; i++) {
    	if(isLeapYear(i)==1){
            	days +=366;	
			}else{
				days +=365;
			}
    }
    for (int i = 1; i < month; i++) {
        days += getDaysOfMonth(year, i);
    }
    days += day-1;
    return days;
}

int calcWeekday(int days) {
    days+=5;
    days%=7;
    if(days==0){
        return 7;
    }
    return days;
}

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    
    int days = calcDays(year, month, day);
    int weekday = calcWeekday(days);
    
    cout << days << endl;
    cout << '*' << weekday << endl;
    
    return 0;
}

