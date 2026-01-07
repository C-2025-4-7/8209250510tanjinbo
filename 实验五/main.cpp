#include "student.h"
int main() {
    Student stud, stud1;
    stud.set_value(101, "ZhangSan", 'm');  // 调用赋初值函数
    stud1.set_value(007, "tcg", 'm');
    stud.display();
    stud1.display();
    return 0;
}