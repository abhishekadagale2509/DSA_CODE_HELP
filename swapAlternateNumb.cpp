/*#include<iostream>
using namespace std;
int printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i];

    }

}

int swapAlt(int a[],int size)
{
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(a[i],a[i+1]);

        }
    }
}
int main()
{
    int arr[10]={4,5,6,3,2,1,8,9,7,5};
    swapAlt(arr,10);
    printArray(arr,10);
}*/

#include<iostream>
using namespace std;

void printArray(int a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void swapAlt(int a[], int size)
{
    for(int i = 0; i < size; i += 2)
    {
        if(i + 1 < size) // ensure we don't go out of bounds
        {
            swap(a[i], a[i + 1]);
        }
    }
}

int main()
{
    int arr[10] = {4, 5, 6, 3, 2, 1, 8, 9, 7, 5};
    swapAlt(arr, 10);
    printArray(arr, 10);
}
