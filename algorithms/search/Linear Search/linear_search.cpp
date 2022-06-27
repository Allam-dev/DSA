#include <iostream>

using namespace std;

// ابسط طريقه للبحث بتلف وتقارن

// worst case : O(n)
// هطر الف على ال array كلمها

// best case : O(1)
//  هلقها من اول مره

int search(int array[], int value);

const int array_size = 10;

int main()
{
    int array[array_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << search(array, 50) << endl;

    return 0;
}

int search(int array[], int value)
{
    for (int i = 0; i < array_size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}