#include <iostream>

using namespace std;

class A {
    public:
    virtual ~A(){}
};

class FixedType : public A {
    virtual ~FixedType(){}

};

template <typename T>
bool instanceOf(T t)
{
    return (dynamic_cast<FixedType*>(t) == NULL) ? false : true;
}

int main(int argc, char const* argv[])
{
    cout << "------------------------------------" << endl;
    cout << "C++ instanceOf 테스트2 (FixedType의 인스턴스인지 검사) " << endl;
    cout << "------------------------------------" << endl;
    cout << "class A {}" << endl;
    cout << "class FixedType : public A {}" << endl;
    cout << endl;

    A *a = new A();
    cout << "A *a = new A();" << endl;

    FixedType *b = new FixedType();
    cout << "FixedType *b = new FixedType();" << endl;

    bool b1 = instanceOf(a);
    cout << "instanceOf(a) = " << ((b1)?"true":"false") << endl;

    bool b2 = instanceOf(b);
    cout << "instanceOf(b) = " << ((b2)?"true":"false") << endl;

    cout << endl << endl;

    return 0;
}
