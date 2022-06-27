#include <iostream>

using namespace std;

void insertionSort(int array[], int arraySize);

// بتبداء من العنصر الثانى وتشوف مكانه الصح فى الى قبله وترحل كل الى اكبر منه و تحت العنصر فى المكان الى المفروض يتحت فيه

// best case => O(n^2)

// worst case => O(n)

// space complexty => O(1)

// in-place => true

// stabel => ture

int main()
{
    int array[7] = {1, 6, 9, 10, 50, 7, 2};
    insertionSort(array, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}

void insertionSort(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        int selectedItem = array[i + 1];
        int endOfSorttedArray = i;
        while (endOfSorttedArray >= 0 && array[endOfSorttedArray] > selectedItem)
        {
            array[endOfSorttedArray + 1] = array[endOfSorttedArray];
            endOfSorttedArray--;
        }
        array[endOfSorttedArray + 1] = selectedItem;
    }
}