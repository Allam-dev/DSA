#include <iostream>
#define nl '\n'
using namespace std;

int main()
{
    int x = 20;
    int *px = &x;          // pointer to x
    int **ppx = &px;       // pointer to px
    int ***pppx = &ppx;    // pointer to ppx
    int ****ppppx = &pppx; // pointer to pppx
    printf("%d\n", x++);
    printf("%d\n", (*px)++);
    printf("%d\n", (**ppx)++);
    printf("%d\n", (***pppx)++);
    printf("%d\n", (****ppppx)++);

    return 0;
}