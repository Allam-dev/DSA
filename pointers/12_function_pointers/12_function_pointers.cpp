// pointer can point to data
// and also to functions 😲
// but how 🤔 ?
// at code(text) section in memory
// insteractions have an address
// and the function stored in block of instructions
// the entire address for the function is address of the first instruction

#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "Hi , how r u\n";
    return a + b;
}

int main()
{
    int result;
    // if you dont use `int (*fun_ptr)(int,int)` it will be `int* fun_ptr(int,int)` and that is a function return pointer
    // functio pointer must have the same signature as function [return_type, args]
    int (*fun_ptr)(int, int) = &add; // or = add without &
   
    result = (*fun_ptr)(5, 4);       // de-referencing and executing the function and you can use function name only without *
    cout << result << endl;          // print and return the value

    fun_ptr(3, 2) + 1;
    // ⚠️  doesn't access the first instruction of the function.
    // It calls the function and adds 1 to its result, but doesn't do anything with that value.

    return 0;
}