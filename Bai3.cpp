#include <iostream>
using namespace std;

int main() {
	int month, x = 1;
	do {
		cout << "Nhap thang can xem ngay: ";
		cin >> month;
		switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "Co 31 ngay";
			break;
		case 4: case 6: case 9: case 11:
			cout << "Co 30 ngay";
			break;
		case 2:
			int year;
			cout << "Nhap nam cua cac thang can xem: ";
			cin >> year;

			if (year % 400 == 0) {
				cout << "Co 29 ngay ";
			}
			else {
				if ((year % 4 == 0) && (year % 100 != 0)) {
					cout << "Co 29 ngay";
				}
				else {
					cout << "Co 28 ngay";
				}
			}
			break;
		default:
			x = 0;
		}
	} while (x == 0);
	
	
}
