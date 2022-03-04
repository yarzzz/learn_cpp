#include <iostream>

using namespace std;

static std::string _CutParenthesesNTail(std::string&& prettyFuncon)
{
    auto pos = prettyFuncon.find('(');
    if(pos!=std::string::npos)
        prettyFuncon.erase(prettyFuncon.begin()+pos, prettyFuncon.end());

    return std::move(prettyFuncon);
}

#define __STR_FUNCTION__ _CutParenthesesNTail(std::string(__PRETTY_FUNCTION__))

class A{
public:
    void B(){
        cout << __STR_FUNCTION__ << endl;
        cout << typeid(this).name() << endl;
    }
};

int main() {
    A().B();

    return EXIT_SUCCESS;
}