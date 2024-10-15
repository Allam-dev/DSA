#include <iostream>

using namespace std;

int *multiply(int a, int b)
{
    // can't do this cuz the varable will deleted from the stack after the calling of function finished
    // and it will throw compilaition error
    // int result = a * b;
    int *result = (int *)malloc(sizeof(long long));
    *result = a * b;
    return result;
}

int main()
{
    int x = 30, y = 9851;
    int *result_ptr = multiply(x, y);

    cout << *result_ptr << endl;
    return 0;
}