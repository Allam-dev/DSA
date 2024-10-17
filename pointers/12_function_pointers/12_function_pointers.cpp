// pointer can point to data
// and also to functions 😲
// but how 🤔 ?
// at code(text) section in memory
// insteractions have an addresses
// and the function stored in block of instructions
// the entire address for the function is address of the first instruction
// and we can use pointer function for callback function - pass function to function -

#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "Hi , how r u\n";
    return a + b;
}

void bubble_sort(int *arr, int size, bool (*compare)(int, int))
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

bool descending(int x, int y)
{
    return y > x;
}

bool ascending(int x, int y)
{
    return y < x;
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}

int main()
{
    int result;
    // if you dont use `int (*fun_ptr)(int,int)` it will be `int* fun_ptr(int,int)` and that is a function return pointer
    // functio pointer must have the same signature as function [return_type, args]
    int (*fun_ptr)(int, int) = &add; // or = add without &

    result = (*fun_ptr)(5, 4); // de-referencing and executing the function and you can use function name only without *
    cout << result << endl;    // print and return the value

    fun_ptr(3, 2) + 1;
    // ⚠️  doesn't access the first instruction of the function.
    // It calls the function and adds 1 to its result, but doesn't do anything with that value.

    int list[50] = {78, 32, 95, 67, 14, 49, 21, 83, 12, 90,
                    37, 56, 71, 24, 6, 42, 11, 86, 34, 50,
                    65, 7, 93, 28, 18, 99, 4, 77, 53, 88,
                    46, 1, 39, 81, 9, 25, 60, 92, 17, 58,
                    72, 30, 55, 20, 8, 62, 47, 96, 3, 19};
    cout << "Array before any things\n";
    print_array(list, 50);

    bubble_sort(list, 50, ascending);
    cout << "Array after ascending\n";
    print_array(list, 50);

    bubble_sort(list, 50, descending);
    cout << "Array after descending\n";
    print_array(list, 50);

    return 0;
}