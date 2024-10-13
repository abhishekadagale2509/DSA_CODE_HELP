#include<iostream>
using namespace std;
void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i<size){
            int temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;

        }
    }
}
void printNo(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int arr[5]={1,5,4,3,8};
    swap(arr,5);
    printNo(arr,5);
    
}
/*#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        // Swap arr[i] with arr[i+1]
        int temp = arr[i];
        arr[i] = arr[i+2];
        arr[i+2] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 5, 4, 3, 8};
    
    // Print original array
    cout << "Original array: ";
    printArray(arr, 5);

    // Swap alternate elements
    swapAlternate(arr, 5);

    // Print array after swapping
    cout << "Array after swapping: ";
    printArray(arr, 5);

    return 0;
}
*/