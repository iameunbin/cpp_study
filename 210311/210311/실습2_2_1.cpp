// yes 입력될 때까지 종료하지 않는 프로그램 1

#include <iostream>
#include <cstring>	// string.h == cstring 

using namespace std;

int main() {
	char quest[100];

	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요 >> ";
		cin >> quest;

		if (strcmp(quest, "yes") == 0)
			break;
	}

	cout << "종료합니다" << endl;
}