#include<iostream>
#include<cstring>
using namespace std;
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。
//如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
int indexOf(const char s1[], const char s2[]) {
	int i = 0, j = 0;
	while (s2[i] != '\0') {
		j = 0;
		while (s1[j] != '\0' && s2[i + j] == s1[j]) {
			j++;
		}
		if (s1[j] == '\0') {
			return i; // 找到匹配，返回下标
		}
		i++;
	}
	return -1; // 未找到匹配，返回-1
}
int main() {
	const int MAX = 100;
	char s1[MAX], s2[MAX];
	cout << "请输入字符串s1: ";
	cin.getline(s1, MAX);
	cout << "请输入字符串s2: ";
	cin.getline(s2, MAX);
	int index = indexOf(s1, s2);
	if (index != -1) {
		cout << "字符串s1是字符串s2的子串，起始下标为: " << index << endl;
	} else {
		cout << "字符串s1不是字符串s2的子串。" << endl;
	}
	return 0;
}