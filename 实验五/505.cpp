#include<iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point() : x(60), y(80) {}  // 构造函数初始化坐标(60,80)
    void setPoint(int i, int j) {  // 修改坐标
        x = 60 + i;
        y = 80 + j;
    }
    void display() {  // 输出坐标
        cout << "修改后的坐标：(" << x << "," << y << ")" << endl;
    }
};

int main() {
    Point p;
    cout << "初始坐标(60,80)，输入i和j修改坐标：";
    int i, j;
    cin >> i >> j;
    p.setPoint(i, j);
    p.display();
    return 0;
}