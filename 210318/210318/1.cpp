#include <iostream>
using namespace std;

// Ŭ���� �����
class Tower {
private:
	int height;		// �������

public:
	Tower();
	Tower(int);
	int getHeight();
};

// Ŭ���� ������
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
	Tower myTower;	// 1����
	Tower seoulTower(100);	// 100����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;

	return 0;
}