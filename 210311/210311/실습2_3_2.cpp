#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	string long_name;
	int length = 0;

	cout << "5���� �̸��� ',' ���� �����Ͽ� �Է��ϼ���" << endl;
	cout << ">>";

	for (int i = 0; i < 5; i++) {
		getline(cin, name, ',');
		cout << i + 1 << " : " << name << endl;
		if (length < name.length()) {
			length = name.length();		// ���� �� �̸��� ����
			long_name = name;			// ���� �� �̸�
		}
	}
	cout << "���� �� �̸��� " << long_name << endl;

}