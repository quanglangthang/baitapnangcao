// Tinh x - x ^ 3 + x ^ 5 + ......]

#include <iostream>
#include <math.h>
using namespace std;


int main() {
	int x,n,sum=0, dem = 0,test=0, bo = 0;
	cin >> x >> n;
	test = n-1+n;
	
	for (int i = 1;i<=test;i=i+2) {
		dem = dem + 1;
		sum += pow(x,i)*pow(-1,dem+1);
//		cout << sum << endl;
	}
	cout << sum;
}
