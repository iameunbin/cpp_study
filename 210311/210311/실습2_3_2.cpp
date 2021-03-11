#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	string long_name;
	int length = 0;

	cout << "5명의 이름을 ',' 으로 구분하여 입력하세요" << endl;
	cout << ">>";

	for (int i = 0; i < 5; i++) {
		getline(cin, name, ',');
		cout << i + 1 << " : " << name << endl;
		if (length < name.length()) {
			length = name.length();		// 가장 긴 이름의 길이
			long_name = name;			// 가장 긴 이름
		}
	}
	cout << "가장 긴 이름은 " << long_name << endl;

}