#include <iostream>

#include <boost/signals2.hpp>
#include <boost/bind/bind.hpp>

#include "cal.h"
#include "signal.h"

int multi(int a, int b) {
    std::cout << "a * b = " << a * b << std::endl;
    return a * b;
}

int main() {
    auto a = Cal();
    M_S.signal.connect(boost::bind(multi, boost::placeholders::_1, boost::placeholders::_2));
    M_S.signal(20, 15);
    return 0;
}