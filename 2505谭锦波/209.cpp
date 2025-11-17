#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int day = 1, num = 2;
    double total = 0, price = 0.8;
    while (num <= 100)
    {
        total += num * price;
        num *= 2;
        day++;
    }
    day--; // 最后一次循环num超过100，天数减1
    cout << fixed << setprecision(2) << "总花费：" << total << "元" << endl;
    cout << "平均每天花费：" << total / day << "元" << endl;
    return 0;
}