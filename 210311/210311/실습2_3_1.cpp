#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;

	cout << "5���� �̸��� ',' ���� �����Ͽ� �Է��ϼ���" << endl;
	cout << ">>";

	for (int i = 0; i < 5; i++) {
		getline(cin, name, ',');
		cout << i + 1 << " : " << name << endl;
	}

}