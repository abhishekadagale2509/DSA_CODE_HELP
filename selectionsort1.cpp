void selectionSort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minINdex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;


            }
            swap(arr[minIndex,arr[j]]);
        }


    }

}
/*#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);  // swap only once per outer loop
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr, arr.size());

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
*/