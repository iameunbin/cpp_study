// yes �Էµ� ������ �������� �ʴ� ���α׷� 1

#include <iostream>
#include <cstring>	// string.h == cstring 

using namespace std;

int main() {
	char quest[100];

	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";
		cin >> quest;

		if (strcmp(quest, "yes") == 0)
			break;
	}

	cout << "�����մϴ�" << endl;
}