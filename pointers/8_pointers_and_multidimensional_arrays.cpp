#include <iostream>
#include <string.h>
#define nl '\n'
using namespace std;

void oneDfunc(int x[]){} // can write int* x

void twoDfunc(int x[][3]){} // can write int (*x)[3]

void threeDfunc(int x[][2][2]){} // can write int (*x)[2][2] and this != int ***x
// `int (*x)[2][2]` is a pointer to 2D array 
// `int ***x` is 

int main()
{
    int three_d_array[3][2][2] = {2,5,7,9,3,4,6,1,0,8,11,13};

    printf("three_d_array           = %x\n", three_d_array);
    printf("three_d_array[0]        = %x\n", three_d_array[0]);
    printf("three_d_array[0][0]     = %x\n", three_d_array[0][0]);
    printf("three_d_array[0][0][0]  = %x\n", three_d_array[0][0][0]);

    int a[3] = {45,89,6};
    int b[2][3]={{56,3,8},{74,8,6}};
    int c[2][2][2] = {{{1,2},{3,4}},{{4,5},{6,7}}};

    return 0;
}