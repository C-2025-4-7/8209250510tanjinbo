#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char op;
	cout << "输入算式(格式: a + b): ";
	cin >> a >> op >> b;
	switch (op) {
		case '+':
		cout << a << " + " << b << " = " << a + b << endl;
		break;
		case '-':
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case '*':;
				cout << a << " * " << b << " = " << a * b << endl;
				break;
				case '/':
					if (b != 0)
						cout << a << " / " << b << " = " << a / b << endl;
					else
						cout << "错误: 除数不能为零!" << endl;
					break;
					case'%':
						if (b==0){
							cout << "错误: 除数不能为零!" << endl;
						}
						else {
							cout << (int)a << " % " << (int)b << " = " << (int)a % (int)b << endl;
						}
						break;
						default:
							cout << "错误: 不支持的运算符!" << endl;
	}
	return 0;
}