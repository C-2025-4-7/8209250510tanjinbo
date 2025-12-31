#include <iostream>
#include <cstring>
using namespace std;
void f(char* st, int i) {
    st[i] = '\0';
    cout << st << endl;
    if (i > 1) f(st, i - 1);
}
int main() {
    char st[] = "abcd";
    f(st, 4);
    return 0;
}
// Êä³ö£ºabcd ¡ú abc ¡ú ab ¡ú a