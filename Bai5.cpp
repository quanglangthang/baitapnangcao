#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i =1;i<=n;i++) {
		if (i <= n) {
			for (int j=1;j<=n;j++) {
				if ((j >= n-i+1) && (j <= n+i-1)) {
					cout << i << " ";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;	
	}
}
