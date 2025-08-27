#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>mid)
        {
            start=mid+1;


        }
        else{
            mid=mid-1;

        }
        mid=(start+end)/2;

    }
    return -1;



}
int main()
{
    int even[6]={2,4,5,6,7,3};
    int odd[5]={9,8,7,2,5};
    int evenIndex=binarysearch(even,6,7);
    cout<<"index is "<<evenIndex;
}