#include<iostream>
using namespace std;
int main() 
{
	//Int i=k+1;///原来的代码Int应该为int；且变量k未定义；应改为int k=0；
	//cout << i++ << endl;
	//int i =  1;//原代码变量i重复定义；应改为int i=k+1；
	//cout << i++ << endl;
	//下列为修改后的正确代码
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}

