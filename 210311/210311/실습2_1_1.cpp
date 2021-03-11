#include <iostream>
#include <cstring>	// string.h == cstring 

using namespace std;

int main() {
	char password1[100];
	char password2[100];

	cout << "암호를 입력하세요 >> ";
	cin >> password1;

	cout << "암호를 다시 입력하세요 >> ";
	cin >> password2;

	if (strcmp(password1, password2) == 0)
		cout << "암호가 일치합니다";
	else
		cout << "암호가 일치하지 않습니다";
	cout << endl;
}