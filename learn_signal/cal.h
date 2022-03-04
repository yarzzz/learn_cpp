#pragma once

#include <boost/signals2.hpp>
#include <boost/bind/bind.hpp>

#include <iostream>
#include "signal.h"

class Cal {
public:
    Cal();
    // Cal() {
    //     std::cout << "init cal" << std::endl;
    //     addC = signal.connect(boost::bind(&Cal::add, this, boost::placeholders::_1, boost::placeholders::_2));
    //     subC = signal.connect(boost::bind(&Cal::sub, this, boost::placeholders::_1, boost::placeholders::_2));
    // }
    int add(int a, int b);
    int sub(int a, int b);
private:
    boost::signals2::connection addC;
    boost::signals2::connection subC;
};