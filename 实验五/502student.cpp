#include "student.h"
#include<iostream>
#include<cstring>
void Student::display() {
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

void Student::set_value(int n, const char* na, char s) {  // 赋初值函数实现
    num = n;
    strcpy_s(name, na);  // 字符串复制
    sex = s;
}