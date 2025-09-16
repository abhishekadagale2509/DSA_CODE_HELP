#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target)
{
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target){
                return 1;

            }
        }
    }
    return 0;

}
int main()
{
    int arr[3][4];
    cout<<"enter arr elements";
    //for taking user input values
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }

    }
    //for print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];

        }

    }
    int target;
    cout<<"eneter search val";
    cin>>target;
    if(isPresent(arr,target))
    {
        cout<<"ele found";
    }
    else{
        cout<<"not found";
    }
}
/*#include<iostream>
using namespace std;

// Pass 2D array with fixed column size
bool isPresent(int arr[][4], int target) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][4];
    cout << "Enter array elements:\n";

    // Taking user input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing array
    cout << "Array is:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter search value: ";
    cin >> target;

    // Correct function call
    if(isPresent(arr, target)) {
        cout << "Element found";
    } else {
        cout << "Not found";
    }

    return 0;
}
*/