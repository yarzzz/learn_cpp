#include <iostream>
#include <map>

using namespace std;

int main() {
    map <int, int> m;
    m.insert({1, 11});
    auto a22 = m[1];
    a22 = 22;
    cout << "auto 22:" << m[1] << endl;
    auto& a33 = m[1];
    a33 = 33;
    cout << "auto& 33:" << m[1] << endl;
}
