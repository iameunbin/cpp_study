// yes �Էµ� ������ �������� �ʴ� ���α׷� 2

#include <iostream>
#include <string>	// string.h == cstring 

using namespace std;

int main() {
	string quest;

	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";
		//getline(cin, quest);
		cin >> quest;

		if (quest == "yes")
			break;
	}

	cout << "�����մϴ�" << endl;
}