#include <iostream>

using namespace std;

class A {
    public:
    virtual ~A(){}
};

class A1 : public A {
    virtual ~A1(){}

};

class B {
virtual ~B(){}
};


/**
 * T1이 T2의 인스터스인가
 *
 *
 *
 */
template <typename T1, typename T2>
bool instanceOf(T1 t1, T2 t2)
{
    return (dynamic_cast<T2>(t1) == NULL) ? false : true;
}

int main(int argc, char const* argv[])
{
    cout << endl << endl;
    cout << "------------------------------------" << endl;
    cout << "C++ instanceOf 테스트 시작 " << endl;
    cout << "------------------------------------" << endl;
    cout << "class A {}" << endl;
    cout << "class A1 extends A {}" << endl;
    cout << "class B {}" << endl;
    cout << endl;
    cout << "A1 *empty = NULL;" << endl;
    cout << endl;

    A1 *a1 = new A1();
    A1 *empty = NULL;

    bool b1 = instanceOf(a1, new A());
    cout << "instanceOf(a1, new A()) = " << ((b1)?"true":"false") << endl;

    bool b2 = instanceOf(a1, new B());
    cout << "instanceOf(a1, new B()) = " << ((b2)?"true":"false") << endl;

    bool b3 = instanceOf(a1, new A1());
    cout << "instanceOf(a1, new A1()) = " << ((b3)?"true":"false") << endl;

    bool b4 = instanceOf(empty, new A1());
    cout << "instanceOf(empty, new A1()) = " << ((b4)?"true":"false") << endl;

    cout << endl << endl;

    return 0;
}
