#include <iostream>
using namespace std;

void swap(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[7] = {1, 5, 2, 3, 5, 1, 2}; // Example array, 3 is unique

    swap(arr, 7);
    printarr(arr,7);
    return 0;
}
