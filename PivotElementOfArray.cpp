/*#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }
        else{
            e=mid;

        }mid=s+(e-s)/2;

    }return s;


}
int main(){
    int arr[5]={3,4,2,7,8};
    cout<<"pivot is "<<pivot(arr,5);
}*/

#include<iostream>
using namespace std;

int pivot(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    
    while (s < e) { // Using s < e because we want to find the point where the change happens
        if (arr[mid] >= arr[0]) { 
            s = mid + 1; // Pivot is in the right part of the array
        } else {
            e = mid; // Pivot could be at mid or before
        }
        mid = s + (e - s) / 2;
    }
    
    return s; // s will point to the pivot
}

int main() {
    int arr[5] = {7, 9, 1, 2, 3}; // Example of a rotated sorted array
    cout << "Pivot is at index: " << pivot(arr, 5) << endl;
}
