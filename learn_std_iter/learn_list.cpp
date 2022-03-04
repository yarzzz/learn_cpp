#include <iostream>
#include <list>

using namespace std;

namespace learn_list {

void test_wrong1() {
    list<int> a{1};
    a.push_back(2);

    for (auto v : a) {
        cout << "1,map->" << v << endl;
        a.remove(v);
    }

    for (auto v : a) {
        cout << "2,map->" << v << endl;
    }
}

void test_wrong2() {
    list<int> a{1};
    a.push_back(2);

    for (auto iter = a.begin(); iter != a.end(); iter ++ ) {
        cout << "1,list->" << *iter << endl;
        a.erase(iter);
    }

    for (auto v : a) {
        cout << "2,list->" << v << endl;
    }
}

void test_right() {
    list<int> a{1};
    a.push_back(2);

    auto iter = a.begin();
    while (iter != a.end()) {
        cout << "1,list->" << *iter << endl;
        // a.erase(iter++);
        iter = a.erase(iter);
    }

    for (auto v : a) {
        cout << "2,list->" << v << endl;
    }
}

}