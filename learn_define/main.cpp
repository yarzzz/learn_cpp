#include <iostream>

#define __OS_STRING(member) << "\"" << #member << "\":\"" << member << "\","

using namespace std;

int main() {
#define FIL_VERSION "1.0.0"
#ifndef FIL_VERSION
            cout << "FIL_VERSION not define" << endl;
#else
            cout << "version: " << FIL_VERSION << endl;
#endif // FIL_VERSION

    int a = 1;

    cout
    __OS_STRING(a);

    return 0;
}