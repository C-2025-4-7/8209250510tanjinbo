#include<iostream>
using namespace std;
int main() {
	double x, y;
	cout << "输入x: ";
	cin >> x;
	if(0<x&& x<1){
		y = 3 - 2 * x;
	}
	else if (1<=x&&x<5) {
		y = 2.0 / (4 * x) + 1;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
	}
	else {
		cout << "x不在定义域内" << endl;
		return 1;
	}
	cout << "y = " << y << endl;
	return 0;
	}