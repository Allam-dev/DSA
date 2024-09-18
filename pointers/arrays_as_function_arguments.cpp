#include <iostream>
#define nl '\n'
using namespace std;

int count_without_need_to_size(int arr[]){ // int arr[] = int* arr
    int result = 0;
    // size well be 1 cuz compiler pass the address of first item in array instead of copy the whole array
    // sizeof(*arr) cuz arr is int* not int and sizeof() take datatype not pointer
    int size = sizeof(*arr) / sizeof(arr[0]); 
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    return result;
}

int count_with_size(int* arr,int size)
{
    int result = 0;
   
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    return result;
}

void square_elements(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       arr[i] = arr[i]*arr[i];
    }
    
}
int main()
{
    int nums[6] = {5,8,456,6,8,2};
    int size = sizeof(nums)/sizeof(int);// cuz nums[0] is an int
    // can use &nums[0] instead of nums
    // output the first element => 5
    cout << "count_without_need_to_size => " << count_without_need_to_size(nums) << nl;
    cout << "count_with_size => "<<count_with_size(&nums[0],size) << nl;
    square_elements(nums,size);
    cout << "after square => ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ' ';
    }
    

    return 0;
}