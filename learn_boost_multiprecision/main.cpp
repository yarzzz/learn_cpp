#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;

using double_type = boost::multiprecision::number<
     boost::multiprecision::cpp_dec_float<8>
    ,boost::multiprecision::et_off
>;

int main() {
    double_type a = 0.001;
    cout << a.str() << endl;
    a.assign(0.001);
    cout << a.str() << endl;
    a.assign("0.001");
    cout << a.str() << endl;

    return EXIT_SUCCESS;
}