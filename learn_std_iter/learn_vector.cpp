#include <iostream>
#include <vector>

using namespace std;

namespace learn_vector {

void test_right1() {
    vector<int> a{1};
    a.push_back(2);

    for (auto iter = a.begin(); iter != a.end(); iter ++ ) {
        cout << "1,vector->" << *iter << endl;
        a.erase(iter);
    }

    for (auto v : a) {
        cout << "2,vector->" << v << endl;
    }
}

void test_right() {
    vector<int> a{1};
    a.push_back(2);

    auto iter = a.begin();
    while (iter != a.end()) {
        cout << "1,vector->" << *iter << endl;
        a.erase(iter++);
    }

    for (auto v : a) {
        cout << "2,vector->" << v << endl;
    }
}

}