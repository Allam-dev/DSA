#include <iostream>

using namespace std;

const int arraySize = 15;

void bubbleSort(int array[]);

// بتبدل كل انتنين مع بعض

// best case => O(n^2)

// worst case => O(n)

// space complexty => O(1)

// in-place => true

// stabel => ture

int main()
{
    int array[arraySize] = {1, 2, 3, 4, 10, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16};

    bubbleSort(array);

    cout << "after sort : " << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}

void bubbleSort(int array[])
{

    bool isSortted = true;

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                isSortted = false;
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                cout << "j = " << j << endl;
            }
        }
        if (isSortted == true)
        {
            break;
        }
        }
}