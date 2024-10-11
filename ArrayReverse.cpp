/*#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start, arr[end]])
        {
            start++;
            end--;
        }
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{

    int arr[6] = {2, 4, 1, 8, 7, 5};
    printarray(arr, 6);
    reverse(arr, 6);
}*/
#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Loop to reverse the array
    while (start < end) {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {2, 4, 1, 8, 7, 5};

    // Print original array
    cout << "Original array: ";
    printArray(arr, 6);

    // Reverse the array
    reverse(arr, 6);

    // Print reversed array
    cout << "Reversed array: ";
    printArray(arr, 6);

    return 0;
}
