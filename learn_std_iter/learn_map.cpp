#include <iostream>
#include <map>

using namespace std;

namespace learn_map {

void test_wrong1() {
    map<int, string> a;
    a[1] = "11";
    a.insert({2, "22"});

    for (auto pair : a) {
        cout << "1,map->" << pair.first << ": " << pair.second << endl;
        a.erase(pair.first);
    }

    for (auto pair : a) {
        cout << "2,map->" << pair.first << ": " << pair.second << endl;
    }
}

void test_wrong2() {
    map<int, string> a;
    a[1] = "11";
    a.insert({2, "22"});

    for (auto iter = a.begin(); iter != a.end(); iter ++ ) {
        cout << "1,map->" << iter->first << ": " << iter->second << endl;
        a.erase(iter);
    }

    for (auto pair : a) {
        cout << "2,map->" << pair.first << ": " << pair.second << endl;
    }
}

void test_right() {
    map<int, string> a;
    a[1] = "11";
    a.insert({2, "22"});

    auto iter = a.begin();
    while (iter != a.end()) {
        cout << "1,map->" << iter->first << ": " << iter->second << endl;
        // a.erase(iter++);
        iter = a.erase(iter);
    }

    for (auto pair : a) {
        cout << "2,map->" << pair.first << ": " << pair.second << endl;
    }
}

}