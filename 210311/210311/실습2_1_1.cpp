#include <iostream>
#include <cstring>	// string.h == cstring 

using namespace std;

int main() {
	char password1[100];
	char password2[100];

	cout << "��ȣ�� �Է��ϼ��� >> ";
	cin >> password1;

	cout << "��ȣ�� �ٽ� �Է��ϼ��� >> ";
	cin >> password2;

	if (strcmp(password1, password2) == 0)
		cout << "��ȣ�� ��ġ�մϴ�";
	else
		cout << "��ȣ�� ��ġ���� �ʽ��ϴ�";
	cout << endl;
}