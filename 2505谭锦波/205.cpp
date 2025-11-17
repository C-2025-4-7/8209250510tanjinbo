#include<iostream>
using namespace std;
int main()
{
	char c;
	int letter = 0, space = 0, digit = 0, other = 0;
	cout << "输入一行字符(以#结束): " << endl;
	while (cin.get(c) && c != '#') {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			letter++;
		}
		else if (c >= '0' && c <= '9') {
			digit++;
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			space++;
		}
		else {
			other++;
		}
	}
	cout << "字母个数: " << letter << endl;
	cout << "数字个数: " << digit << endl;
	cout << "空格个数: " << space << endl;
	cout << "其他字符个数: " << other << endl;
	return 0;
}
