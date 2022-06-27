#include <iostream>
using namespace std;

int binarySearch(int array[], int length, int number);

// worst case : O(lg(n))

// best case : O(1)

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << binarySearch(array, 10, 9) << endl;
    return 0;
}

int binarySearch(int array[], int length, int number)
{
    int start = 0;
    int end = length - 1;
    int middle;
    while (end >= start)
    {
        middle = (start + end) / 2;
        if (array[middle] == number)
        {
            return middle;
        }
        else if (array[middle] > number)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return -1;
}