 /*void selectionSort(vector<int>&arr,int n){
    for(int i=o;i<n-1;i++){
        int minInd=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[minInd])
            {
                minInd=j;
            }
            swap(arr[minInd],arr[i]);
        }

    }
}*/
#include <iostream>
#include <vector>
#include <algorithm> // for swap function
using namespace std;


void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minInd = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minInd]) {
                minInd = j;
            }
        }
        swap(arr[minInd], arr[i]);
    }
}
