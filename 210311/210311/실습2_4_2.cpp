#include <iostream>

using namespace std;

int main() {
	int result;

	int dan;
	cout << "�Է��� �� : ";
	cin >> dan;

	for (int i = 1; i < 10; i++) {
		result = dan * i;

		cout << dan << "x" << i << "=" << result << '\t';
	}

	return 0;
}