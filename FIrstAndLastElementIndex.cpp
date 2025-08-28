#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-size)/2;
    int ans=-1;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;


        }
        else if(key<arr[mid])
        {
            end=mid-1;


        }
        else if(key>arr[mid])
        {
            start=mid+1;

        }

    }
    return ans;
}

int lastOcc(int arr[],int size,int key)
{

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;

        }
        else if(key<arr[mid])
        {
            end=mid-1;


        }
        else if(key>arr[mid])
        {
            start=mid+1;

        }
    }
    return ans;
}


int main()
{
    int even[5]={2,3,3,3,4};
    cout<<"first occ index is "<<firstOcc(even,5,3);
    cout<<"last occ index is "<<lastOcc(even,5,3);
}