#include <iostream>

using namespace std;

class RmObject {
    public:
        virtual ~RmObject(){}
};

class Parent : public RmObject {};

class Child : public Parent {};

class TheOther : public RmObject {};



template <typename T>
bool instanceOf(RmObject *o)
{
    return (dynamic_cast<T>(o) == NULL) ? false : true;
}




int main(int argc, char const* argv[])
{
    bool rst;
    Parent *parent = NULL;
    Child *child = NULL;
    TheOther *theOther = NULL;

    cout << endl << endl;
    cout << "------------------------------------" << endl;
    cout << "C++ instanceof 테스트" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;

    parent = new Parent();
    cout << "parent = new Parent();" << endl;
    rst = instanceOf<Parent*>(parent);
    cout << "   instanceOf<Parent*>(parent) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<Child*>(parent);
    cout << "   instanceOf<Child*>(parent) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<TheOther*>(parent);
    cout << "   instanceOf<TheOther*>(parent) = " << ((rst)?"true":"false") << endl;

    cout << endl;

    parent = new Child();
    cout << "parent = new Child();" << endl;
    rst = instanceOf<Parent*>(parent);
    cout << "   instanceOf<Parent*>(parent) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<Child*>(parent);
    cout << "   instanceOf<Child*>(parent) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<TheOther*>(parent);
    cout << "   instanceOf<TheOther*>(parent) = " << ((rst)?"true":"false") << endl;

    cout << endl;

    child = new Child();
    cout << "child = new Child();" << endl;
    rst = instanceOf<Parent*>(child);
    cout << "   instanceOf<Parent*>(child) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<Child*>(child);
    cout << "   instanceOf<Child*>(child) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<TheOther*>(child);
    cout << "   instanceOf<TheOther*>(child) = " << ((rst)?"true":"false") << endl;

    cout << endl;

    theOther = new TheOther();
    cout << "theOther = new Child();" << endl;
    rst = instanceOf<Parent*>(theOther);
    cout << "   instanceOf<Parent*>(theOther) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<Child*>(theOther);
    cout << "   instanceOf<Child*>(theOther) = " << ((rst)?"true":"false") << endl;
    rst = instanceOf<TheOther*>(theOther);
    cout << "   instanceOf<TheOther*>(theOther) = " << ((rst)?"true":"false") << endl;

    cout << endl;

    return 0;
}
