// yes 입력될 때까지 종료하지 않는 프로그램 2

#include <iostream>
#include <string>	// string.h == cstring 

using namespace std;

int main() {
	string quest;

	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요 >> ";
		//getline(cin, quest);
		cin >> quest;

		if (quest == "yes")
			break;
	}

	cout << "종료합니다" << endl;
}