#include<iostream>
using namespace std;

int fistOcc(int arr[],int size,int key){

int start=0,end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;

        
    }
    else if(key<arr[mid]){
        end=mid-1;

    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return ans;
}

int main()
{
    int arr[5]={1,3,3,3,5};
    cout<<"first occ"<<fistOcc(arr,5,3);
}
/*#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Move left to find earlier occurrence
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1; // Move right to find later occurrence
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int arr[5] = {1, 3, 3, 3, 5};
    cout << "First occurrence: " << firstOcc(arr, 5, 3) << endl;
    cout << "Last occurrence: " << lastOcc(arr, 5, 3) << endl;
}
*/