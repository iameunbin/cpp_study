#include <iostream>
#include <string>	// string.h == cstring 

using namespace std;

int main() {
	string password1;
	string password2;

	cout << "��ȣ�� �Է��ϼ��� >> ";
	cin >> password1;

	cout << "��ȣ�� �ٽ� �Է��ϼ��� >> ";
	cin >> password2;

	if (password1 == password2)
		cout << "��ȣ�� ��ġ�մϴ�";
	else
		cout << "��ȣ�� ��ġ���� �ʽ��ϴ�";
	cout << endl;
}