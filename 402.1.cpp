#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1), len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        const char* p1 = s1, * p2 = s2 + i;
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (*p1 == '\0') return i;
    }
    return -1;
}
int main() {
    char s1[100], s2[100];
    cout << "ÊäÈë×Ó´®s1: ";
    cin >> s1;
    cin.ignore();
    cout << "ÊäÈë×Ö·û´®s2: ";
    cin.getline(s2, 100);
    cout << "Æ¥ÅäÏÂ±ê: " << indexof(s1, s2) << endl;
    return 0;
}