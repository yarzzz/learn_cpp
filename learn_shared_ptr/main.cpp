#include <iostream>
#include <memory>

using namespace std;

int test1() {
    int a = 1;
    auto p1 = make_shared<int>(a);
    auto p2 = shared_ptr<int>(p1.get());
    return EXIT_SUCCESS;
}

class BB;
class AA
{
public:
    weak_ptr<BB> bptr;
    ~AA( ){cout<<"~AA()"<<endl; }
};
class BB
{
public:
    weak_ptr<AA> aptr;
    ~BB(){cout<<"~BB()"<<endl; }
};

int test2() {
    shared_ptr<AA> aa(new AA());
    shared_ptr<BB> bb(new BB());
    aa->bptr = bb;
    bb->aptr = aa;
    cout<<aa.use_count()<<endl;
    cout<<bb.use_count()<<endl;

    return EXIT_SUCCESS;
}

int main() {
    return test2();
}
