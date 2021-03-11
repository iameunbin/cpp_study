#include <iostream>
#include <string>	// string.h == cstring 

using namespace std;

int main() {
	string password1;
	string password2;

	cout << "암호를 입력하세요 >> ";
	cin >> password1;

	cout << "암호를 다시 입력하세요 >> ";
	cin >> password2;

	if (password1 == password2)
		cout << "암호가 일치합니다";
	else
		cout << "암호가 일치하지 않습니다";
	cout << endl;
}