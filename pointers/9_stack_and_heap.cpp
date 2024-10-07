#include <iostream>

using namespace std;

int main()
{
    int a = 8; // goes to stack

    // working with heap in c
    // (malloc - calloc - realloc - free) thay are functions
    // in c++
    // (new - delete) thay are operators

    int *p;
    p = (int *)malloc(sizeof(int)); // malloc return a void pointer so we cast it to int*
    // p it self as a pointer is in stack but its value is in heap
    // and the dereference is only way to edit the value that is in heap
    // !! if malloc can't allocate a free block of memory it will return NULL

    cout << "value of p before malloc it : " << *p << endl; // garbage value
    p[1] = 19;
    *p = 150;

    cout << "value of p after set value to it : " << *p << endl;
    cout << "value of p[1] after set value to it : " << *(p + 1) << endl;

    free(p); // will clear the block of memory that `point` to it from the heap

    printf("value of p after free it : %d\n", *p); // garbage value

    p = (int *)malloc(9 * sizeof(int)); // if I do this without calling the `free()` function
    // it will point to new block of memory without delete the old one
    // and in this case the block of memory is and array of 9 integares

    // the same login in c++
    cout << "==================== c++ style ====================\n";
    int *pp;
    pp = new int; // no need for type casting

    cout << "value of pp before malloc it : " << *pp << endl; // garbage value
    pp[1] = 19;
    *pp = 150;

    cout << "value of pp after set value to it : " << *pp << endl;
    cout << "value of pp[1] after set value to it : " << *(pp + 1) << endl;

    delete pp;
    printf("value of pp after free it : %d\n", *pp); // garbage value

    pp = new int[9];
    pp[20] = 30;
    cout << "value of pp[20] after set value to it : " << pp[20] << endl;

    delete[] pp; // to delete the array

    return 0;
}