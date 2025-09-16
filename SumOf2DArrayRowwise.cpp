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
int printsumrow(int arr[][3],int row,int col){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];

        }
        return sum;

    }


}
int main()
{
    int arr[3][3];
    cout<<"enter arr elements";
    //for taking user input values
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    }
    //for print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];

        }

    }
     pintsumrow(arr,3,3);
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

// Search for element in 3x3 array
bool isPresent(int arr[][3], int target) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

// Print sum of each row
void printsumrow(int arr[][3], int row, int col) {
    cout << "\nRow sums:\n";
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i << " sum = " << sum << endl;
    }
}

int main() {
    int arr[3][3];
    cout << "Enter array elements (3x3):\n";

    // Input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Print array
    cout << "\nArray is:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Call row sum function
    printsumrow(arr, 3, 3);

    // Search target element
    int target;
    cout << "\nEnter search value: ";
    cin >> target;

    if(isPresent(arr, target)) {
        cout << "Element found\n";
    } else {
        cout << "Not found\n";
    }

    return 0;
}
*/