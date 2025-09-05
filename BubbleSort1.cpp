#include<iostream>
using namespace std;
int main()
{
    void bubbleSort(vector<int>&arr,int n)
    {
        for(int i=0;i<n;i++)
        {
            bool swapped=false;
            for(int j=0;j<n-i;j++){

                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);

                }
                swapped=true;

            }

        }
        if(swapped==false){
            break;
        }

    }
}
/*#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped, array is sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/