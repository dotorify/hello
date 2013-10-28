#include <iostream>
#include <sstream>
#include <assert.h>

using namespace std;

class ClassA
{
    public:
        ClassA(int val) {
            this->val = val;
        }

        ClassA(const ClassA& o) {
            this->val = o.val;
        }

        bool operator < (const ClassA& r) {
            return this->val < r.val;
        }

        bool operator > (const ClassA& r) const {
            return this->val > r.val;
        }

        bool operator == (const ClassA& r) const {
            return this->val == r.val;
        }

        bool operator != (const ClassA& r) const {
            return this->val != r.val;
        }

        const char* toString() const {
            stringstream ss;
            ss << val;
            return ss.str().c_str();
        }

    private:
        int val;

};

int main(void)
{
    ClassA a(5);
    ClassA b(10);
    ClassA c = a;

    cout << "a is " << a.toString() << endl;
    cout << "b is " << b.toString() << endl;
    cout << "c is " << c.toString() << endl;

    assert(a<b);
    assert(!(a>b));
    assert(a!=b);
    assert(!(a==b));

    return 0;
}

