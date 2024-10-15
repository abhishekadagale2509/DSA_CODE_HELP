#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + mid) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
        return mid;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 30, 45, 60};
   int index= binarySearch(arr,5,45);
   cout<<index;
}
/*#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start +(end-start) / 2; // Corrected the initialization of mid
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start +(end-start) / 2; // Update mid on each iteration
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 30, 45, 60};
    int index = binarySearch(arr, 5, 45);
    cout << "Index of 45: " << index;
}
*/