#include<iostream>
using namespace std;
int print(int arr[],int size,int start=2)
{
    for(int i=start;i<size,i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={4,3,2,1,5};
    int size=5;
    print(arr,size);
    cout<<endl;
    print(arr,size,2);
}
/*#include <iostream>
using namespace std;

void print(int arr[], int size, int start = 2)
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 3, 2, 1, 5};
    int size = 5;

    print(arr, size);     // uses default start=2
    cout << endl;
    print(arr, size, 2);  // explicitly passing start=2
}
*/