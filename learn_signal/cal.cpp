#include <boost/signals2.hpp>
#include <boost/bind/bind.hpp>

#include "cal.h"

Cal::Cal() {
    std::cout << "init cal" << std::endl;
    addC = M_S.signal.connect(boost::bind(&Cal::add, this, boost::placeholders::_1, boost::placeholders::_2));
    subC = M_S.signal.connect(boost::bind(&Cal::sub, this, boost::placeholders::_1, boost::placeholders::_2));
};

int Cal::add(int a, int b) {
    std::cout << "a + b = " << a + b << std::endl;
    return a + b;
}

int Cal::sub(int a, int b) {
    std::cout << "a - b = " << a - b << std::endl;
    return a - b;
}
