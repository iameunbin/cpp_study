#include <iostream>

using namespace std;

int main() {
	int result;

	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			result = i * j;

			cout << j << "x" << i << "=" << result << '\t';
		}
		cout << endl;
	}

	return 0;
}