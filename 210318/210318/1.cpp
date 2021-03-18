#include <iostream>
using namespace std;

// 클래스 선언부
class Tower {
private:
	int height;		// 멤버변수

public:
	Tower();
	Tower(int);
	int getHeight();
};

// 클래스 구현부
Tower::Tower() {
	height = 1;
}

Tower::Tower(int h) {
	height = h;
}

int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;	// 1미터
	Tower seoulTower(100);	// 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

	return 0;
}