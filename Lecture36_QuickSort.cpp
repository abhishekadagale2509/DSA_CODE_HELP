#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
 
    }
int pivotIndex=s+count;
swap(arr[pivotIndex],arr[s]);
int i=s,j=e;
while(i<pivotIndex&&j>pivotIndex)

{
    while(arr[i]<pivotIndex)
    {
        i++;
    }
    while(arr[j]>pivotIndex){

        j--;
    }
    if(i<pivotIndex&&j>pivotIndex)
    {
        swap(arr[i],arr[j]);

    }
}
return pivotIndex;

}

int quicksort(int arr[], int s; int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
    s
}
int main()
{
    int arr[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int n = 10;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}