#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s;



}
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"pivot is "<<pivot(arr,5);
}
/*#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)   // use s < e, not s <= e
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;  // here mid is possible pivot
        }
        mid = s + (e - s) / 2;
    }
    return s;   // or return e, both will be same
}

int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    cout << "pivot index is " << pivot(arr, 5) << endl;
    cout << "pivot element is " << arr[pivot(arr, 5)];
}
*/