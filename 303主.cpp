#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
//编程实现摄氏温度到华氏温度的转换：
//编写一个头文件，包含下面两个函数：
//double celsius_to_fah(double cel)    摄氏温度到华氏温度
//double fahrenheit_to_cels(double fah) 华氏温度到摄氏温度
int main()
{
	double cel, fah;
	cout << "请输入摄氏温度：  ";
	cin >> cel;
	fah = celsius_to_fah(cel);
	cout << fixed << setprecision(2);
	cout << "对应的华氏温度为：" << fah << endl;
	cout << "请输入华氏温度：  ";
	cin >> fah;
	cel = fahrenheit_to_cels(fah);
	cout << fixed << setprecision(2);
	cout << "对应的摄氏温度为：" << cel << endl;
	return 0;
}
