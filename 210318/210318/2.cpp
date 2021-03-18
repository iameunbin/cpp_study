#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	Date(int, int, int);
	Date(string);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string dd) {
	int pos1 = dd.find("/");	// dd 문자열의 맨 앞부터 검색 pos1=4
	int pos2 = dd.find("/", pos1 + 1);	// pos1+1의 위치부터 검색 pos2=6
	string temp = dd.substr(0, pos1);
	year = stoi(temp);
	temp = dd.substr(pos1 + 1, pos2 - pos1 - 1);
	month = stoi(temp);
	temp = dd.substr(pos2 + 1);
	day = stoi(temp);
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::show() {
	cout << year << "년 " << month << "월 " << day << "일" << endl;
}

int main() {
	Date birth(2014, 3, 20);	// 2014년 3월 20일
	Date independenceDay("1945/8/15");	// 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() 
		<< ',' << birth.getDay() << endl;

	return 0;
}