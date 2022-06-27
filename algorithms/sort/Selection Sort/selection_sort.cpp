#include <iostream>

using namespace std;

// بتلف على ال array كلها و تشوف اصغر رقم وتحته فى الاول وهكذا و هكذا

// best case => O(n^2)

// worst case => O(n^2)

// space complexty => O(1)

// in-place => true

// stabel => ture

void selectionSort(int array[], int arraySize);

int main()
{

    int array[5] = {1, 2, 6, 22, 46};

    selectionSort(array, 5);

    cout << "==========================result==========================" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}

void selectionSort(int array[], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        int smalistItemIndex = i;
        for (int j = i; j < arraySize; j++)
        {
            if (array[j] < array[smalistItemIndex])
            {
                smalistItemIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[smalistItemIndex];
        array[smalistItemIndex] = temp;
    }
}