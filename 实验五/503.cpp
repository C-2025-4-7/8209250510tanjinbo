#include<iostream>
using namespace std;

class Cuboid {
private:
    double length, width, height;
public:
    void input() {  // 输入长、宽、高
        cin >> length >> width >> height;
    }
    double calculate_volume() {  // 计算体积
        return length * width * height;
    }
    void output_volume() {  // 输出体积
        cout << "体积：" << calculate_volume() << endl;
    }
};

int main() {
    Cuboid c1, c2, c3;
    cout << "输入3个长方柱的长、宽、高（空格分隔）：" << endl;
    c1.input();
    c2.input();
    c3.input();

    cout << "3个长方柱的体积分别为：" << endl;
    c1.output_volume();
    c2.output_volume();
    c3.output_volume();
    return 0;
}