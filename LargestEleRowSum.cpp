#include<iostream>
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
// Print sum of each col
void printsumcol(int arr[][3], int row, int col) {
    cout << "\nRow sums:\n";
    for(int j = 0; j < row; j++) {
        int sum = 0;
        for(int i= 0; i< col; i++) {
            sum += arr[j][i];
        }
        cout << "Row " << j << " sum = " << sum << endl;
    }
}

void LargestRowSum(int arr[][3],int n,int m){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<3;i++){
        count=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];

        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"max sum is "<<maxi;
    return i;

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
     printsumcol(arr, 3, 3);

    // Search target element
    int target;
    cout << "\nEnter search value: ";
    cin >> target;

    if(isPresent(arr, target)) {
        cout << "Element found\n";
    } else {
        cout << "Not found\n";
    }

    int ansIndex=LargestRowSum(arr,3,3);
    cout<<"max row is at index"<<ansIndex;
    return 0;
}
/*#include<iostream>
#include<climits> // for INT_MIN
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

// Print sum of each column
void printsumcol(int arr[][3], int row, int col) {
    cout << "\nColumn sums:\n";
    for(int j = 0; j < col; j++) {
        int sum = 0;
        for(int i = 0; i < row; i++) {
            sum += arr[i][j];
        }
        cout << "Column " << j << " sum = " << sum << endl;
    }
}

// Find row with largest sum
int LargestRowSum(int arr[][3], int n, int m) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        if(sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "Max row sum is " << maxi << endl;
    return rowIndex;
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
    printsumcol(arr, 3, 3);

    // Search target element
    int target;
    cout << "\nEnter search value: ";
    cin >> target;

    if(isPresent(arr, target)) {
        cout << "Element found\n";
    } else {
        cout << "Not found\n";
    }

    int ansIndex = LargestRowSum(arr, 3, 3);
    cout << "Max row is at index " << ansIndex << endl;

    return 0;
}
*/