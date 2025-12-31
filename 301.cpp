#include<iostream>
using namespace std;
//求最大公因数与最小公倍数，用函数来实现
int gcd(int m, int n) {
	while (n != 0) {
		int temp = m % n;
		m = n;
		n = temp;
	}
	return m;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << "最大公因数为：" << gcd(m,n)<< endl;
	cout << "最小公倍数为：" << (m * n) / gcd(m,n)<< endl;
	return 0;
}