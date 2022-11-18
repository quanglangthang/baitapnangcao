#include <iostream>
using namespace std;



int giaiThua(int a) {
	int tract = 1;
	
	if (a > 1) {
		for (int i = 2; i <= a; i++) {
			tract *= i;
		}
		return tract;
	}
	else {
		return tract;
	}
}

int main() {
	int x;
	float sum = 1;
	cin >> x;
	for (int i = 1; i <= x + 1; i++) {
		sum += pow(x, i) / giaiThua(i);
	}
	cout << sum;
}
