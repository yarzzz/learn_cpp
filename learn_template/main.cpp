#include <iostream>

using namespace std;

class A {
public:
    int a = 1;
};

template <typename T1, typename T2>
void print(T1 t1, T2 t2) {
    cout << t1.a << t2 << endl;
}

int main() {
    A a;
    a.a = 1;
    string b = "a";
    int c = 2;
    print(a, b);
    print(a, c);
    // print(b, c); // cpmpile error

    return EXIT_SUCCESS;
}