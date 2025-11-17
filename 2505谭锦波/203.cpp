#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "输入三角形的三条边长: ";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double p = a + b + c;
		cout << "三角形的周长为: " << p << endl;
		if(a==b||a==c||b==c){
			cout << "该三角形为等腰三角形" << endl;
		}else{
			cout << "该三角形为一般三角形" << endl;
		}
	}
	else {
		cout << "不能构成三角形" << endl;
	}
	return 0;
}

