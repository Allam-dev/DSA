#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    cout << "************************** ~ **************************\n";
    // ~ is a not bitwise operator
    char x = 5;
    cout << "x = " << x << " => " << bitset<5>(x) << endl;
    cout << "~x = " << ~x << " => " << bitset<5>(~x) << endl;

    cout << "************************** << **************************\n";
    // << Left shifting is equivalent to multiplication by 2^rightOperand
    int z = 5;
    cout << "z = " << z << endl;
    cout << "z<<1 = " << (z << 1) << endl; // z<<1 = 5*2^1 = 10
    cout << "z<<3 = " << (z << 3) << endl; // z<<1 = 5*2^3 = 40

    cout << "************************** >> **************************\n";
    // >> right shifting is equivalent to division by 2^rightOperand
    int f = 150;
    cout << "f = " << f << endl;
    cout << "f>>1 = " << (f >> 1) << endl; // f>>1 = 150/2^1 = 75
    cout << "f>>3 = " << (f >> 3) << endl; // f>>1 = 150/2^3 = 18.75

    cout << "************************** ^ **************************\n";
    // xor
    int a = 8, b = 3;
    cout << "before xor operations\n";
    cout << "a = " << a << " , " << "b = " << b << endl;
    // make swipe wihtout temp varialbe
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "after xor operations\n";
    cout << "a = " << a << " , " << "b = " << b << endl;

    // Assignment operator is having least precedence except the comma operator 

    // cout << (++a+++b) << endl; erro because postfix increament and decresnt has precedence greater than prefix
    // so compiler read it like this ++a++ + b

    cout << (++a+(++b)) << endl;

    return 0;
}