#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
	double a, xn, xn1;
	cout << "输入a的值：";
	cin >> a;
	if(a<0)
	{
		cout<<"a必须大于等于0"<<endl;
		return 1;
	}
	xn = a ; // 初始猜测值
	do{
		xn1 = 0.5 * (xn + a / xn); // 牛顿迭代公式
		if (fabs(xn1 - xn) < 1e-5) // 收敛条件
			break;
		xn = xn1;
	} while (true);
	cout << "平方根为：" << xn1 << endl;
	return 0;
}

