#include <iostream>
#define nl '\n'
using namespace std;

int main()
{                   //  byte3    byte 2   byte 1   byte 0
    int num = 1030; // 00000000 00000000 00000100 00000110
    int *pointer_to_int = &num;
    char *pointer_to_char = (char *)pointer_to_int; // cuz char is a 1byte it will keep first byte in int num 00000110
    // and ignore other 3 bytes [ 00000000 00000000 00000100 ]

    printf("size of int = %d\n", sizeof(int));
    printf("size of char = %d\n", sizeof(char));
    printf("pointer_to_int = %x\n*pointer_to_int = %d\n", pointer_to_int, *pointer_to_int);
    printf("pointer_to_char = %x\n*pointer_to_char = %d\n", pointer_to_char, *pointer_to_char);

    printf("pointer_to_char+1 = %x\n", (pointer_to_char + 1)); // address of byte1 in num variable

    printf("*(pointer_to_char+1) = %d\n", *(pointer_to_char + 1)); // cuz char => 1byte , the next address well be byte1 from int num
                                                                   //  so it well print [ 00000100 ] = 4

    // =============================== void pointer - generic pointer ======================================
    // can point to any datatype but can't dereference
    // can't apply arthmetic like [ generic_pointer+1 ]
    void *generic_pointer = pointer_to_int;
    printf("generic pointer = %x      [ generic_pointer = pointer_to_int ]\n", generic_pointer);
    // printf("*generic pointer = %d", *generic_pointer); error

    generic_pointer = pointer_to_char;
    printf("generic pointer = %x     [ generic_pointer = pointer_to_char ]\n", generic_pointer);

    return 0;
}