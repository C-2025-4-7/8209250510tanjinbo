#include<iostream>
using namespace std;
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。
//const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。
//字母不分大小写，例如字母A和字母a都被看作a。
//编写测试程序，读入字符串并调用count函数，显示非零的次数
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0; // 初始化计数数组
	}
	for (int i = 0; s[i] != '\0'; i++) {
		char ch = s[i];
		if (ch >= 'a' && ch <= 'z') {
			counts[ch - 'a']++;
		} else if (ch >= 'A' && ch <= 'Z') {
			counts[ch - 'A']++;
		}
	}
}
int main() {
	const int SIZE = 1000;
	char str[SIZE];
	int counts[26];
	cout << "请输入一个字符串: ";
	cin.getline(str, SIZE);
	count(str, counts);
	cout << "字母出现的次数如下:" << endl;
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			cout << char('a' + i) << ": " << counts[i] << endl;
		}
	}
	return 0;
}