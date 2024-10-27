#include <iostream>

using namespace std;


// this type is a dircet recursion
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}