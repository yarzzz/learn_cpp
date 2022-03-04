#include <iostream>

using namespace std;

inline void F2() {
    cout << __FUNCTION__ << endl;
}

void F1() {
    F2();
}

int main() {
    F1();

    return EXIT_SUCCESS;
}