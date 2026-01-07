#include <iostream>
using namespace std;
    class Time {
    private:
        int hour;
        int minute;
        int sec;

    public:
        void input() {
            cout << "请输入时间（时 分 秒）：";
            cin >> hour >> minute >> sec;
        }

        void output() {
            cout << hour << ":" << minute << ":" << sec << endl;
        }
    };

    int main() {
        Time t1;
        t1.input();
        t1.output();
        return 0;
    }