#include <iostream>
#include <unordered_map>

using namespace std;

namespace learn_unordered_map {

void test_right1() {
    unordered_map<int, string> a;
    a[1] = "11";
    a.insert({2, "22"});

    for (auto pair : a) {
        cout << "1,unordered_map->" << pair.first << ": " << pair.second << endl;
        a.erase(pair.first);
    }

    for (auto pair : a) {
        cout << "2,unordered_map->" << pair.first << ": " << pair.second << endl;
    }
}

void test_right2() {
    unordered_map<int, string> a;
    a[1] = "11";
    a.insert({2, "22"});

    for (auto iter = a.begin(); iter != a.end(); iter ++ ) {
        cout << "1,unordered_map->" << iter->first << ": " << iter->second << endl;
        a.erase(iter);
    }

    for (auto pair : a) {
        cout << "2,unordered_map->" << pair.first << ": " << pair.second << endl;
    }
}

void test_right() {
    unordered_map<int, string> a;
    a[1] = "11";
    a.insert({2, "22"});

    auto iter = a.begin();
    while (iter != a.end()) {
        cout << "1,unordered_map->" << iter->first << ": " << iter->second << endl;
        a.erase(iter++);
    }

    for (auto pair : a) {
        cout << "2,unordered_map->" << pair.first << ": " << pair.second << endl;
    }
}

}