#include<iostream>
using namespace std;
//打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
int main()
{
	int arr[10];
	int unique[10];
	int count = 0;
	cout << "请输入10个数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		bool isUnique = true;
		for (int j = 0; j < count; j++)
		{
			if (arr[i] == unique[j])
			{
				isUnique = false;
				break;
			}
		}
		if (isUnique)
		{
			unique[count] = arr[i];
			count++;
		}
	}
	cout << "不同的数有：" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << unique[i] << " ";
	}
	cout << endl;
	return 0;
}