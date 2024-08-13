#include <iostream>
#define nl '\n'
using namespace std;

int main()
{

    int a;
    int c = 5;
    int *p;

    a = 100;
    p = &a;

    cout << "value of a = " << a << nl;
    cout << "value of c = " << c << nl;                          // value of a var                                               // value of a var
    cout << "value of a (*p // dereferencing) = " << (*p) << nl; // value of a var
    cout << "address of a (&a) = " << (&a) << nl;                // address of a var
    cout << "address of a (p) = " << p << nl;                    // address of a var
    cout << "address of p (&p) = " << &p << nl;                  // address of pa pointer
    cout << "=================================== *p = c ====================================" << nl;
    *p = c;
    cout << "*p = " << *p << nl;
    cout << " p = " << p << nl;
    cout << " a = " << a << nl;
    cout << "&a = " << &a << nl;
    cout << " c = " << c << nl;
    cout << "&c = " << &c << nl;
    cout << "=================================== p = &c ====================================" << nl;
    p = &c;
    cout << "*p = " << *p << nl;
    cout << " p = " << p << nl;
    cout << " a = " << a << nl;
    cout << "&a = " << &a << nl;
    cout << " c = " << c << nl;
    cout << "&c = " << &c << nl;
    cout << "=================================== pointer arthmetic ====================================" << nl;
    cout << "size of int = " << sizeof(int) << " bytes" << nl;
    cout << "p : " << p << nl; // if p = 2002
    cout << "value of P : " << *p << nl;
    cout << "p + 1 :" << (p + 1) << nl; // p+1 = 2008 cuz int = 4 bytes and (p+1) means you point to next address
    cout << "value of P+1 [ *p+1 ] : " << *p + 1 << nl;
    cout << "value of P+1 [ *(p+1) ] : " << *(p + 1) << nl; // garbage value

    return 0;
}