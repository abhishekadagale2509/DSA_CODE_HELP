/*#include<iostream>
using namespace std;
int swap(int arr[],int size)
{
    int start=0;
    int end=size-1;
    if(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int printarray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i];

    }

}
int main()
{
    int a[6]={4,5,6,1,2,3};
    int b[5]={1,2,3,6,5};
    printarray(a,6);
    printarray(b,5);

    swap(a,6);
    swap(b,5);

}*/
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start < end)  // fixed: loop until start < end
    {
        swap(arr[start], arr[end]); // using std::swap
        start++;
        end--;
    }
}

void printArray(int a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[6] = {4, 5, 6, 1, 2, 3};
    int b[5] = {1, 2, 3, 6, 5};

    cout << "Original arrays:" << endl;
    printArray(a, 6);
    printArray(b, 5);

    reverseArray(a, 6);
    reverseArray(b, 5);

    cout << "Reversed arrays:" << endl;
    printArray(a, 6);
    printArray(b, 5);

    return 0;
}
