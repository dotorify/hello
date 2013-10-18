#include <iostream>

using namespace std;

template <typename T1, typename T2>
const T1& Max(const T1 &a, const T2 &b)
{
    return (a < b) ? b : a; 
}


template <typename T1, typename T2>
const T1& Low(const T1 &a, const T2 &b)
{
    return (a < b) ? a : b; 
}


int main(int argc, const char *argv[])
{
    int    i1, i2;
    float  f1, f2;
    double d1, d2;

    i1 = 11;   i2 = 12;
    f1 = 21.1; f2 = 22.2;
    d1 = 31.1; d2 = 32.2;

    // Max<int,int>(a, b) 에서 <int,int>는 생략될 수 있다. 
    // 또한 생략하는 것이 일반적이다.
    cout << "Which is bigger " << i1 << " or " << i2 << "?" << endl;
    cout << Max(i1, i2) << " is bigger than " << Low(i1, i2) << endl;
    cout << endl;

    // 하지만 'Max<float,float>'처럼 지정해 줄 수도 있는데,
    cout << "Which is bigger " << f1 << " or " << f2 << "?" << endl;
    cout << Max<float,float>(f1, f2) << " is bigger than " << Low<float,float>(f1, f2) << endl;
    cout << endl;

    // 그 경우 지정한 타입으로 인자가 캐스팅된다.
    cout << "Which is bigger " << d1 << " or " << d2 << "?" << endl;
    cout << Max<int,int>(d1, d2) << " is bigger than " << Low<int,int>(d1, d2) << endl;
    cout << endl;
    
    return 0;
}

/*
 * OUTPUT:
 *
 * Which is bigger 11 or 12?
 * 12 is bigger than 11
 * 
 * Which is bigger 21.1 or 22.2?
 * 22.2 is bigger than 21.1
 * 
 * Which is bigger 31.1 or 32.2?
 * 32 is bigger than 31
 *
 */
