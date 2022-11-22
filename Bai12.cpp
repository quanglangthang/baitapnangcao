// Cong 2 so nguyen to tu 1->N
#include <iostream>
#include <math.h>
using namespace std;

int soNguyenTo(int a) {
	int x = 1;
	for (int i=2;i<=sqrt(a);i++) {
	if (a % i ==0) {
		x = 0;
	}
}
	if ( x==1) {
		return a;
	}
}

int main() {
	int n,arr[100];
	cin >> n;
	for (int i =2;i<=n;i++) {
		arr[i-2] = soNguyenTo(i);
	}
	for (int i=0;i<=n-2;i++) {
		for (int j=i+1;j<=n-2;j++) {
			if (arr[i] + arr[j] == n) {
				cout << arr[i] << " + " << arr[j] << " = " << n << endl;
			}
		}
	}
}
