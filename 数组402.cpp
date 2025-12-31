#include<iostream>
using namespace std;
//起泡排序
//利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。
// 每趟处理中，对相邻元素进行比较。
// 若为降序，则交换；否则，保持原顺序。
//编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。
void bubbleSort(double arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) { // 降序排列
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	const int SIZE = 10;
	double arr[SIZE];
	cout << "请输入10个双精度数字：" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}
	bubbleSort(arr, SIZE);
	cout << "排序后的数字（降序）：" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}