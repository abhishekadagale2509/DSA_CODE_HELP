#include<iostream>
#include<vector>
vector<int>findArrayIndex(vector<int>&arr1,int n,vector <int>&arr2)
using namespace std;
int main()
{
    int i=0,j=0;
    vector(int)ans;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr[i]);
            i++;
            j++;

        }else if(arr1[i]<arr2[j])

        {
            i++;

        }
        else{
            j++;
        }
    }
    return end;

}/*#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIndex(vector<int>& arr1, vector<int>& arr2) {
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]); // store the matching element
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 4, 6};
    
    vector<int> result = findArrayIndex(arr1, arr2);

    cout << "Common elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
*/