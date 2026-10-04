// reverse an array :
// there are 2 ways by which this can be done
// 1. using extra spaces
// 2. not using extra spaces : this is a more optimized way
// in the 1st method trace the given array backwards, then create a new array and in that array copy the elements
// from the given array in the forward way, in the new array start a forward loop.
// now with the help of copy array we will overwrite original array
// we will copy the exact elements from new array into the original array

#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int n = 5;
    int arr[n] = {5, 4, 3, 9, 2};
    int arr1[n];

    cout << "Original array: ";
    print(arr, n);

    // copy reversed values into arr1
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[n - 1 - i];
    }

    // overwrite original array with reversed values
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }

    cout << "Reversed array: ";
    print(arr, n);

    return 0;
}