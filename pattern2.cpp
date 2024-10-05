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
            cout<<i;
            j=j+1;
        }cout<<endl;
        i=i+1;

    }
}
3
111
222
333*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << i;  // Print the row number
            j++;
        }
        cout << endl;  // Move to the next line after finishing the row
        i++;
    }

    return 0;
}
