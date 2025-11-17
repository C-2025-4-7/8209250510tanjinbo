#include<iostream>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int a, b;
	cout << "输入两个正整数: ";
	cin >> a >> b;
	int result = gcd(a, b);
	cout << a << " 和 " << b << " 的最大公约数是: " << result << endl;
	return 0;
}