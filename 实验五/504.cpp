#include<iostream>
using namespace std;

class Student {
public:
    int id;  // 学号
    int score;  // 成绩
};

void max(Student* p, int n) {  // 指向对象的指针作参数
    int max_score = p->score;
    int max_id = p->id;
    for (int i = 1; i < n; i++) {
        if ((p + i)->score > max_score) {
            max_score = (p + i)->score;
            max_id = (p + i)->id;
        }
    }
    cout << "最高成绩：" << max_score << "，对应学号：" << max_id << endl;
}

int main() {
    Student arr[5] = {  // 对象数组初始化
        {101, 85}, {102, 92}, {103, 78}, {104, 95}, {105, 88}
    };
    max(arr, 5);  // 数组名退化为指针
    return 0;
}