#include <iostream>
using namespace std;

int main()
{
    // ================= allocate block of memory =================
    // ------ malloc : void* malloc(size_t size) !note : doesn't initialize the value
    int *p1 = (int *)malloc(sizeof(int));
    p1[1] = 15;
    int *p2 = (int *)malloc(sizeof(int));
    cout << *p2 << endl;
    // ------ calloc : void* calloc(size_t number_of_elements, size_t size)  !note : initialize all values with 0
    int *pcalloc = (int *)calloc(2, sizeof(int));
    pcalloc[0] = 5;
    // pcalloc[1] = 6;
    pcalloc[2] = 52;
    cout << "pcalloc[0] : " << pcalloc[0] << endl;
    cout << "pcalloc[1] : " << pcalloc[1] << endl;
    cout << "pcalloc[2] : " << pcalloc[2] << endl;

    char *pcallocchar = (char *)calloc(5, sizeof(char));
    pcallocchar[0] = 'a';
    pcallocchar[2] = 'l';
    pcallocchar[3] = 'a';
    pcallocchar[4] = 'm';

    cout << "pcallocchar[0] : " << pcallocchar[0] << endl;
    cout << "pcallocchar[1] : " << pcallocchar[1] << endl;
    cout << "pcallocchar[2] : " << pcallocchar[2] << endl;
    cout << "pcallocchar[3] : " << pcallocchar[3] << endl;
    cout << "pcallocchar[4] : " << pcallocchar[4] << endl;

    bool *pcallocbool = (bool *)calloc(2, sizeof(bool));
    pcallocbool[0] = 50;
    cout << "pcallocbool[0] : " << pcallocbool[0] << endl;
    cout << "pcallocbool[1] : " << pcallocbool[1] << endl;

    // ------ realloc : void* realloc(void* ptr, size_t size) => use to resize an existing block of memory
    // if the new size grater than old size and the exisiting block can be extended it will do that
    // if cant it will create new block with new size and copy old block to it and deallocate old block
    // if new size is smaller than old size it will deallocate the rest of block
    // if new size is 0 it will deallocate thw whole block it will do tha same thing like `free()`
    // if the you pass `ptr` as NULL it will be like `malloc` => realloc(NULL,sizeof()) 
    int *old_block = (int *)malloc(200 * sizeof(int));
    old_block[0] = 5;
    old_block[1] = 3;
    int *new_block = (int *)realloc(old_block,4000 * sizeof(int));
    printf("old block = %x\nnew block = %x\n",old_block,new_block);

    // deallocate block of memory

    return 0;
}