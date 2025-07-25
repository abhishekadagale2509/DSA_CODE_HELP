#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while (i<n){
        if(i%2==0)
        {sum=sum+i;
        }
        i++;
    }
    cout<<"sum is"<<sum;

}
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 2; i < n; i += 2) {
        sum += i;
    }

    cout << "Sum of even numbers less than " << n << " is " << sum << endl;

    return 0;
}
*/