#include <iostream>
#include <string.h>
#define nl '\n'
using namespace std;

int main()
{
    int two_d_arr[3][5]; // two_d_arr[0] , two_d_arr[1] and two_d_arr[2] each one is a 1D array of int
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            two_d_arr[i][j] = i + j + 1; // two_d_arr[i][j] = *(two_d_arr[i]+j) = *(*(two_d_arr+i)+j)
        }
    }

    // address :    100          200             300
    //           [ [1,2,3,4,5] , [6,7,8,9,10] , [11,12,13,14,15] ]

    // int* p_to_2d_arr = two_d_arr; can't do this cuz `two_d_arr` is a pointer to 1D array conatains 5 integars

    int(*p_to_2D_arr)[5] = two_d_arr;
    //   first address in array
    printf("2D arr :          %x\n", two_d_arr);
    printf("*2D arr :         %x\n", *two_d_arr);
    printf("2D arr[0] :       %x\n", two_d_arr[0]);
    printf("&(2D arr[0]) :    %x\n", &(two_d_arr[0]));
    printf("&(2D arr[0][0]) : %x\n", &(two_d_arr[0][0]));
    printf("p_to_2D_arr  :    %x\n", p_to_2D_arr);

    return 0;
}