#include<iostream>
#define Pi 3.14159
using namespace std;
int main()
{
	double r, h;
	cout << "输入圆锥的底面半径和高："；
		cin >> r >> h;
	double vol = Pi * r * r * h / 3;
	cout << "圆锥的体积:" << vol << endl;
	return 0;
}