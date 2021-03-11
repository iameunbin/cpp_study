#include <iostream>

using namespace std;

int main() {
	int result;

	int num1, num2;

	cout << "두 개의 숫자 입력 : ";
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