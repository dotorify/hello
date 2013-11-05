#include <iostream>
#include <sstream>
#include <assert.h>

using namespace std;

/*
 * new operator를 이용해서 다른 생성자를 호출하는 방법
 * 하지만 g++ 2.95.4 컴파일러에서는 안된다는 말이 있음.
 */
class ClassA
{
    public:
        ClassA() {
            this->val1 = -1;
            this->val2 = -1;
        }

        ClassA(int val2) {
            new(this) ClassA();//다른 생성자를 호출한다.
            this->val2 = val2;
        }

        int getVal1() {
            return val1;
        }

        int getVal2() {
            return val2;
        }

    private:
        int val1;
        int val2;

};

/*
 * init() 함수를 호출해서 초기화 하는 방법
 */
class ClassB
{
    public:
        ClassB() {
            init();
        }
        ClassB(int val2) {
            init();
            this->val2 = val2;
        }
        int getVal1() {
            return val1;
        }
        int getVal2() {
            return val2;
        }

    private:
        void init() {
            this->val1 = -1;
            this->val2 = -1;
        }

    private:
        int val1;
        int val2;

};

int main(void)
{
    {
        ClassA a;
        ClassA b(10);

        assert(a.getVal1() == -1);
        assert(a.getVal2() == -1);
        assert(b.getVal1() == -1);
        assert(b.getVal2() == 10);
    }

    {
        ClassB a;
        ClassB b(10);

        assert(a.getVal1() == -1);
        assert(a.getVal2() == -1);
        assert(b.getVal1() == -1);
        assert(b.getVal2() == 10);
    }
    return 0;
}

