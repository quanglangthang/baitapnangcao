#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	float sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += 1.0/i;
	}
	cout << setprecision(6) << fixed << sum;
}
