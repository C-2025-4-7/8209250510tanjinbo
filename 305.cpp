#include<iostream>
using namespace std;
//猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
// 第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，
// 问，第一天猴子共摘多少桃子（用递归实现）。
int peach(int day)      //day表示第几天,返回第day天开始时的桃子数
{
	if (day == 10)
	{
		return 1;
	} 
	else 
	{
		return (peach(day + 1) + 1) * 2;  //相当于数列中a(n-1) = (a(n)+1)*2
	}
}
int main() {
	int total_peaches = peach(1);
	cout << "第一天猴子共摘了 " << total_peaches << " 个桃子。" << endl;
	return 0;
}