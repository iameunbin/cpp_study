#include <iostream>

using namespace std;

int main() {
	int result;

	int num1, num2;

	cout << "�� ���� ���� �Է� : ";
	cin >> num1 >> num2;
	for (int i = 1; i < 10; i++) {
		for (int j = num1; j < num2; j++) {
			result = i * j;

			cout << j << "x" << i << "=" << result << '\t';
		}
		cout << endl;
	}
	return 0;
}