#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <unistd.h>

std::recursive_mutex m;

void Test(const char* name, int i) {
    std::lock_guard<std::recursive_mutex> l(m);
    
    std::cout << name << "->" << i << std::endl;
    if (i) {
        std::thread t(Test, name, i - 1);
        t.detach();
    }
}

int main() {
    std::thread t1(Test, "t1", 3);
    t1.detach();
    std::thread t2(Test, "t2", 3);
    t2.detach();
    std::thread t3(Test, "t3", 3);
    t3.detach();
    std::thread t4(Test, "t4", 3);
    t4.detach();

    sleep(5);

    return EXIT_SUCCESS;
}
