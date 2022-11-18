// (1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+...+n).
#include <iostream>
using namespace std;


int main() {

	int n,sum=0,sum1=0;
	cin >> n;
	for (int i=1;i<=n;i++) {
		sum +=i;
		sum1+=sum;
	}
	cout << sum1;
}
