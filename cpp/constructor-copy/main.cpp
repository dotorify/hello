#include <iostream>
#include <stdio.h>
#include <sstream>
#include <assert.h>

using namespace std;

//----------------------------------------------------------------------------------------
class Item
{
    public:
        Item() {
            cout << "	>> Item::Item()		 				//생성자 호출" << endl;
            this->val = 0;
        }

        Item(int val) {
            cout << "	>> Item::Item(int val)				 	//생성자 호출" << endl;
            this->val = val;
        }

        Item(const Item& r) {
            cout << "	>> Item::Item()							//복사 생성자 호출" << endl;
            this->val = r.val;
        }

        Item& operator = (const Item& r) {
            cout << "	>> Item::operator = (const Item& r)			//할당자 호출" << endl;
            this->val = r.val;
            return *this;
        }

        ~Item() {
            cout << "	>> Item::~Item()		 			//소멸자 호출" << endl;
        }

        int getVal() {
            return val;
        }
    private:
        int val;
};

//----------------------------------------------------------------------------------------
/*
 * NOTE
 * ----
 *  생성자에 explicit이 없으면 ClassA c = Class(a); 처럼 변경되서 컴파일됨
 *
 *  예)
 *      //복사생성자를 호출하려 했으나 explicit때문에 실패
 *      ClassA error = a;     // Compile ERROR
 */
class ClassA
{
    public:
        explicit ClassA() {
            cout << "	>> ClassA::ClassA()					//생성자 호출" << endl;
            this->item = new Item();
        }


        explicit ClassA(Item *item) {
            cout << "	>> ClassA::ClassA(Item *item)				//생성자 호출" << endl;
            this->item = item;
        }

        explicit ClassA(const ClassA &r) {
            cout << "	>> ClassA::ClassA(const ClassA &r)			//복사 생성자 호출" << endl;
            this->item = new Item(r.item->getVal());
        }

        ~ClassA() {
            cout << "	>> ClassA::~ClassA()					//소멸자 호출" << endl;
            delete item;
        }

        ClassA& operator =(const ClassA &r) {
            if( this == &r) {
                cout << "	>> ClassA::operator = (const ClassA &r)			//할당자 호출";
                cout << " (this가 같아서 그냥 return함)" << endl;
                cout << "	>>                                     			//(item값은 default 생성자에 의해 0값임)" << endl;;
                return *this;
            }

            cout << "	>> ClassA::operator = (const ClassA &r)			//할당자 호출" << endl;

            Item tmpItem(r.item->getVal());// local 변수라서 소멸자가 호출됨

            // 복사 생성자가 구현되어 있으므로 값으로 대입한다.
            // 만약 new Item()으로 할당한다면 delete를 해 주어야 하므로 주의!!
            *(this->item) = tmpItem;

            return *this;
        }

        void printItemAddress() {
            printf("		(debug) item's address = 0x%08X \n", (unsigned int)item);
            printf("		(debug) item's value   = 0x%08X \n", item->getVal());
        }

    public:
        Item *item;

};

//----------------------------------------------------------------------------------------

int main(void)
{

    cout << "-------------------------" << endl;
    cout << "//생성자" << endl;
    cout << endl;
    cout << "ClassA a(new Item(5));" << endl;
    cout << endl;

    ClassA a(new Item(5));
    a.printItemAddress();

    cout << endl;

    cout << "-------------------------" << endl;
    cout << "//복사생성자" << endl;
    cout << endl;
    cout << "ClassA b(a);" << endl;
    cout << endl;

    ClassA b(a);
    b.printItemAddress();

    cout << endl;

    cout << "-------------------------" << endl;
    cout << "//operator =() 호출 - 1" << endl;
    cout << endl;
    cout << "ClassA c;" << endl;
    cout << "c = a;" << endl;
    cout << endl;

    ClassA c;
    c = a;
    c.printItemAddress();

    cout << endl;

    cout << "-------------------------" << endl;
    cout << "//operator =() 호출 - 2" << endl;
    cout << endl;
    cout << "ClassA d;" << endl;
    cout << "d = d;" << endl;
    cout << endl;

    ClassA d;
    d = d;
    d.printItemAddress();

    cout << endl;
    cout << "-------------------------" << endl;

    return 0;
}

