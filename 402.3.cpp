#include <iostream>
using namespace std;
void sort_array(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}
int main() {
    int n;
    cout << "输入数组元素个数: ";
    cin >> n;
    int* arr = new int[n];
    cout << "输入数组元素: ";
    for (int i = 0; i < n; i++) cin >> *(arr + i);
    sort_array(arr, n);
    cout << "排序后数组: ";
    for (int i = 0; i < n; i++) cout << *(arr + i) << " ";
    cout << endl;
    delete[] arr;
    return 0;
}