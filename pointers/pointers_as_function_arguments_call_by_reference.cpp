#include <iostream>
#define nl '\n'
using namespace std;

void swip_by_pointer(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void swip_by_reference(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

// can't effect on the original vars
void swip_by_value(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{

    int a = 8, z = 91;

    printf("a = %d\nb = %d\n", a, z);

    swip_by_value(a, z);

    printf("a = %d\nb = %d\n", a, z);

    return 0;
}