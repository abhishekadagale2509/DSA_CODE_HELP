/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;

        }cout<<endl;
        i=i+1;

    }
}*/
/*4
****
****
****
*****/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << "*";  // Print star in the same row
            j++;
        }
        cout << endl;  // Move to the next line after finishing the row
        i++;
    }

    return 0;
}
