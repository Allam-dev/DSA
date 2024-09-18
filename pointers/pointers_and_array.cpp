#include <iostream>
#define nl '\n'
using namespace std;

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *p_arr = arr; // arr = &arr[0]
    int (*p) [6] = &arr;

    // arr++ is invalid because arr is a constant pointer
    // p_arr++ is valid because p_arr is a regular pointer
    
    printf("arr[0] = %d\n*p_arr = %d\n", arr[0], *p_arr);
    printf("arr = %x\np_arr = %x\n", arr, p_arr);
    printf("==============================================\n");
    printf("arr[2] = %d\n*(p_arr+2) = %d\n", arr[2], *(p_arr+2));
    printf("&arr[2] = %x\np_arr+2 = %x\n", &arr[2], p_arr+2);
    printf("arr+2 = %x\n", arr+2);

    printf("==============================================\n");

    return 0;
}