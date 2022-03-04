#pragma once

#include <boost/signals2.hpp>

class S {
public:
    static S& instance()
    {
        static S ins;
        return ins;
    }
    boost::signals2::signal<int(int a, int b)> signal;
};

#define M_S S::instance()