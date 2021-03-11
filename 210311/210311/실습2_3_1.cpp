#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;

	cout << "5명의 이름을 ',' 으로 구분하여 입력하세요" << endl;
	cout << ">>";

	for (int i = 0; i < 5; i++) {
		getline(cin, name, ',');
		cout << i + 1 << " : " << name << endl;
	}

}