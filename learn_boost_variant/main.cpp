#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> amap;

    amap.insert({1, "11"});
    // amap.insert({2, "22"});

    auto iter = amap.begin();

    // right way
    while (iter != amap.end()) {
        cout << "111:" << iter->first << " " << iter->second << endl;
        if (iter->first == 1) {
            amap.erase(iter++);
        } else {
            ++iter;
        }
    }

    // have some problems
    for (iter = amap.begin(); iter != amap.end(); iter++) {
        cout << "111:" << iter->first << " " << iter->second << endl;
        if (iter->first == 1) {
            amap.erase(iter);
        }
    }

    iter = amap.begin();
    while (iter != amap.end()) {
        cout << "222:" << iter->first << " " << iter->second << endl;
        ++iter;
    }

    return EXIT_SUCCESS;
}